package Task1;

/**
 * Реализация интерфейса Container на основе списка
 * 
 * @author Городний Евгений (Evgor)
 * @version 1.0.0
 * 
 */
public class MyList implements Container {
	private int size = 0;		// Размер множества	
	private Node first = null;	// Начальный элемент множества
	private Node last = null;	//Последний элемент множества
	
	/** Конструктор
	 * 
	 */
	MyList () {
	}
	/** Конструктор
	 * 
	 * @param data Первый элемент в массиве
	 */
	MyList(int data) {
		last = first = new Node(data);
		size = 1;
	}
	
	@Override
	public Container copy() {
		Container temp = new MyList();
		
		if ( size != 0 ) {
			Node pointer = first;
			
			for ( ; pointer != null; ) {
				temp.add(pointer.getData());
				pointer = pointer.getNext();
			}
		}
		
		return temp;
	}
	
	@Override
    public int size() {
    	return size;
    }
    
	@Override
    public int get(int index) {
    	Node pointer = first;
    	
    	if ( index >= size ) {
    		System.out.println("Превышение диапазона индекса во множестве при операции get");
    		return -1;
    	}
		
    	for(int i = 0; i < index; i++ ) {
    		pointer = pointer.getNext();
		}
    	
    	return pointer.getData();
    }
    
	@Override
    public boolean contains(int element) {
    	if ( size != 0 ) {
			Node pointer = first;
			
			for ( ; pointer != null; ) {
				if (pointer.getData() == element) {
					return true;
				}
				pointer = pointer.getNext();
			}
		}
    	
    	return false;
    }
    
	@Override
    public void ins(int element) {
    	Node temp = new Node(element);
    	
    	if ( first == null) {
    		last = first = temp;
    		size = 1;
    	} else {
    		temp.setNext(first);
    		first.setPrev(temp);
    		first = temp;
    		size += 1;
    	}
    }
    
	@Override
    public void add(int element) {
    	Node temp = new Node(element);
    	
    	if ( first == null) {
    		last = first = temp;
    		size = 1;
    	} else {
    		temp.setPrev(last);
    		last.setNext(temp);
    		last = temp;
    		size += 1;
    	}
    }
    
	@Override
    public void insI(int element, int index) {
    	Node temp = new Node(element);
    	Node pointer = first;
    	
    	if ( index > size ) {
    		System.out.println("Превышение диапазона индекса во множестве при операции InsI");
    		return;
    	}	
    	
    	if ( index == size ) {
    		add(element);
    		return;
    	}	
    	
    	for ( int i = 0; i < index; i++ ) {
    			pointer = pointer.getNext();
    	}
    	
    	temp.setPrev(pointer.getPrev());
    	temp.setNext(pointer);
    	temp.getPrev().setNext(temp);
    	pointer.setPrev(temp);
    	size += 1;
    }
	
	@Override
    public void del(int index) {
    	Node pointer = first;
    	
    	if ( index >= size) {
    		System.out.println("Превышение диапазона индекса во множестве при операции delI");
    		return;
    	}
    	for(int i = 0; i < index; i++ ) {
			pointer = pointer.getNext();
    	}
    	
    	if ( pointer == first) {
			if (pointer == last) {
				last = first = null;
				size = 0;
				return;
			} else {
				first = pointer.getNext();
				pointer.getNext().setPrev(null);
			}
		} else if (pointer == last) {
			last = pointer.getPrev();
			pointer.getPrev().setNext(null);
		} else {
			pointer.getPrev().setNext(pointer.getNext());
			pointer.getNext().setPrev(pointer.getPrev());
		}
		size -= 1;	
    }
	
	@Override
    public void delAll() {
    	first = last = null;
    	size = 0;
    }

}
