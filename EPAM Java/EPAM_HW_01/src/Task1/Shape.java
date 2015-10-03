package Task1;

/** Абстрактный класс Shape
 * 
 * @author Городний Евгений (Evgor)
 * @version 1.0.0
 */
public abstract class Shape {
	private double square = 0; //площадь фигуры 
	
	/** Получение значения площади фигуры.
	 * 
	 * @return Площадь фигуры
	 */
	public double getSquare() {
		return square;
	}
	
	/** Установление значения площади фигуры.
	 * 
	 * @param square Площадь фигуры
	 */
	public void setSquare(double square) {
		if ( square >= 0 ) {
			this.square = square;
		} else {
			System.out.println("ERROR!!! The square of shape is less then 0.");
			System.exit(-1);
		}
	}

	/**Метод метод сложения двух фигур.
	 * 
	 * @param figure Вторая фигура, участвующая в сложении фигур
	 * @return
	 */
	public double sum(Shape figure) {
		return this.square + figure.square;  
	};

}
