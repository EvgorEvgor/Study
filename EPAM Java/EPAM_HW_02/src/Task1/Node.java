package Task1;

/**
 * Класс элементов внутри связанного списка.
 * 
 * @author Городний Евгений (Evgor)
 * @version 1.0.0
 * 
 */
class Node{
    private int data;	//Значнение элемента множества
    private Node prev;	//Предыдущий элемент списка
    private Node next;	//Следующий элемент списка

    /**
     * Конструктор
     */
    Node() {
    	data = 0;
    	prev = next = null;
    }
    
    /**
     * Конструктор
     * 
     * @param data Значение элемента множества
     */
    Node(int data) {
    	this.data = data;
    	prev = next = null;
    }

    /**
     * Получение значения элемента множества
     * 
     * @return Значение элемента множества
     */
	public int getData() {
		return data;
	}

	/** Установление значения множества
	 * 
	 * @param data Устанавливаемое значение
	 */
	public void setData(int data) {
		this.data = data;
	}

	/** Получение ссылки на предыдущий элемент
	 * 
	 * @return Предыдущий элемент
	 */
	public Node getPrev() {
		return prev;
	}
	
	/** Установление ссылки на предыдущий элемент
	 * 
	 * @param prev
	 */
	public void setPrev(Node prev) {
		this.prev = prev;
	}

	/** Получение ссылки на следующий элемент
	 * 
	 * @return
	 */
	public Node getNext() {
		return next;
	}

	/** Установление ссылки на следующий элемент
	 * 
	 * @param next Следующий элемент
	 */
	public void setNext(Node next) {
		this.next = next;
	}
}
