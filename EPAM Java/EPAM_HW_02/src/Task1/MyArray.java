package Task1;

/**
 * Реализация интерфейса Container на основе массивов
 * 
 * @author Городний Евгений (Evgor)
 * @version 1.0.0
 * 
 */
public class MyArray implements Container {
	private int[] array;	// Множество элементов типа 'int' в виде массива
	
	/** Конструктор
	 * 
	 */
	MyArray () {
		array = new int[0];
	}
	
	@Override
	public Container copy() {
    	Container temp = new MyArray();
    		
    	for ( int i = 0; i < array.length; i++ ) {
    		temp.add(array[i]);
    	}
    	
    	return temp;
    }
	
	@Override
    public int size() {
    	return array.length;
    }
    
	@Override
    public int get(int index) {
    	if ( index < array.length ) {
    		return array[index];
    	}
    	System.out.println("Превышение диапазона индекса во множестве при операции get");
    	return -1;
    }
    
	@Override
    public boolean contains(int element) {
    	for ( int i = 0; i < array.length; i++ ) {
    		if ( array[i] == element ) {
    			return true;
    		}
    	}
    	return false;
    }
    
	@Override
    public void ins(int element) {
    	int newSize = array.length + 1;
    	int[] temp = new int[newSize];
    	
    	temp[0] = element;
    	for ( int i = 0, j = 1; i < array.length; i++, j++ ) {
    		temp[j] = array[i];
    	}
    	
    	array = temp;
    }
    
	@Override
    public void add(int element) {
    	int newSize = array.length + 1;
    	int[] temp = new int[newSize];
    	
    	for ( int i = 0; i < array.length; i++ ) {
    		temp[i] = array[i];
    	}
    	temp[newSize - 1] = element;
    	
    	array = temp;
    }
    
	@Override
    public void insI(int element, int index) {
    	int newSize = array.length + 1;
    	int[] temp = new int[newSize];
    	
    	if ( index > array.length ) {
    		System.out.println("Превышение диапазона индекса во множестве при операции InsI");
    		return;
    	}
    	
    	if ( index == array.length ) {
    		add(element);
    		return;
    	}
    	System.arraycopy(array, 0, temp, 0, index);
    	for ( int i = 0; i < index; i++ ) {
			temp[i] = array[i];
    	}    	
    	
    	temp[index] = element;
    	for ( int i = index, j = index + 1; j < newSize; i++, j++ ) {
    		temp[j] = array[i]; 
    	}
    	
    	array = temp;
    }
    
	@Override
    public void del(int index) {
    	int newSize = array.length - 1;
    	int[] temp = new int[newSize];
    	
    	if ( index >= array.length ) {
    		System.out.println("Превышение диапазона индекса во множестве при операции delI");
    		return;
    	}
    	
    	for ( int i = 0; i < index; i++ ) {
    		temp[i] = array[i]; 
    	}
    	
        for ( int i = index, j = index + 1; i < newSize; i++, j++ ) {
    		temp[i] = array[j]; 
    	}
    	
    	array = temp;
    }
	
	@Override
    public void delAll() {
    	array = new int[0];
    }

}
