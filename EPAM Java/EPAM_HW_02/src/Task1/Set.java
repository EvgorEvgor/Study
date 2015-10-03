package Task1;

/**
 * Класс определяет операции над множеством.
 * 
 * @author Evgor
 * @version 1.0.0
 *
 */

public class Set {
	/**
	 * Определяет тип множества. 
	 */
	private Container c;
    
	/**
	 * Конструктор класса Set
	 * 
	 * @param c Присваивает 1-й элемент множеству.
	 */
	Set(Container c) {
    	this.c = c;
    }
    
	/**
	 * Возвращает объединение существующего множества с множетвом s.
	 * 
	 * @param s Объединяемое множество.
	 * @return Возвращает результат объединения множеств.
	 */
    Set union(Set s) {
    	Set result = new Set(c.copy());
        
    	for( int i = 0; i < s.c.size(); i++ ){
            int element = s.c.get(i);
            
            if( !result.c.contains(element) ) {
                result.c.add(element);
            }
        }
        return result;
    }

	/**
	 * Возвращает пересечение существующего множества с множетвом s.
	 * 
	 * @param s Множество для пересечения.
	 * @return Возвращает результат пересечения множеств.
	 */
    public Set intersection(Set s) { 
    	Set result = new Set(c.copy());

    	for( int i = 0; i < result.c.size(); i++ ) {
            int element = result.c.get(i);
            
            if( !s.c.contains(element) ) {
            	result.c.del(i);
            	i -= 1; 
            }            	
        }

    	return result;    
    }
 
	/**
	 * Метод печатает на экран текущее множество.
	 */
	public void print() {
    	if ( this.c != null ) {
			int last = 0;
			
			if ( this.c.size() > 0 ) {
				last = this.c.size() - 1;
			}
	        
	    	for ( int i = 0; i < last; i++ ) {
	        	System.out.print(this.c.get(i) + ", ");
	        }
	        System.out.println(this.c.get(last));
    	}
    }
	
}
