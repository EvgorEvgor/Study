package Task1;

/** Класс Triangle, наследник класса Shape
 * 
 * @author Городний Евгений (Evgor)
 * @version 1.0.0
 */
public class Triangle extends Shape{
	private double a, b, c;	//Стороны треугольника
	
	/** Конструктор 
	 * 
	 * @param a Сторона треугольника A
	 * @param b Сторона треугольника B
	 * @param c Сторона треугольника C
	 */
	Triangle(double a, double b, double c) {
		if ( checkParameters(a, b, c) ) {
			this.a = a;
			this.b = b;
			this.c = c;
			this.setSquare(square(a, b, c));
		} else {
			System.out.println("ERROR!!! The length of the sides of a triangle are not correct.");
			System.exit(-1);
		}
	}
	
	/** Проверяет стороны треугольника на корректность значений
	 * 
	 * @param a Сторона треугольника A
	 * @param b Сторона треугольника B
	 * @param c Сторона треугольника C
	 * @return Возвращает, корректно ли значение сторон треугольника. (true|false)
	 */
	private boolean checkParameters(double a, double b, double c) {
		if ( ( a > 0 ) && ( b > 0 ) && ( c > 0 ) &&
				 ( a < b + c ) && ( b < a + c ) && ( c < a + b) ) {
				return true;
			} else {
				return false;
			}
	}
	
	/** Рассчитывает площадь треугольника
	 * 
	 * @param a Сторона треугольника A
	 * @param b Сторона треугольника B
	 * @param c Сторона треугольника C
	 * @return Площадь треугольника.
	 */
	private double square(double a, double b, double c) {
		return Math.sqrt((a+b+c)*(b+c-a)*(a+c-b)*(a+b-c))/4; 	// S=¼*√((А+В+С)*(В+С-А)*(А+С-В)*(А+В-С))
	}
	
	/** Получение значения стороны  A треугольника.
	 * 
	 * @return Значение стороны A треугольника.
	 */
	public double getA() {
		return a;
	}

	/** Установление значение стороны A треугольника.
	 * 
	 * @param a Новое значение стороны A треугольника.
	 */
	public void setA(double a) {
		if ( checkParameters(a, this.b, this.c) ) {
			this.a = a;
			this.setSquare(square(a, this.b, this.c));
		} else {
			System.out.println("ERROR!!! The length of the side A of a triangle are not correct.");
			System.exit(-1);
		}
	}

	/** Получение значения стороны  B треугольника.
	 * 
	 * @return Значение стороны B треугольника.
	 */
	public double getB() {
		return b;
	}

	/** Установление значение стороны B треугольника.
	 * 
	 * @param a Новое значение стороны B треугольника.
	 */
	public void setB(double b) {
		if ( checkParameters(this.a, b, this.c) ) {
			this.b = b;
			this.setSquare(square(this.a, b, this.c));
		} else {
			System.out.println("ERROR!!! The length of the side B of a triangle are not correct.");
			System.exit(-1);
		}
	}

	/** Получение значения стороны  C треугольника.
	 * 
	 * @return Значение стороны C треугольника.
	 */
	public double getC() {
		return c;
	}

	/** Установление значение стороны C треугольника.
	 * 
	 * @param a Новое значение стороны C треугольника.
	 */
	public void setC(double c) {
		if ( checkParameters(this.a, this.b, c) ) {
			this.c = c;
			this.setSquare(square(this.a, this.b, c));
		} else {
			System.out.println("ERROR!!! The length of the side C of a triangle are not correct.");
			System.exit(-1);
		}
	}
	
	
}
