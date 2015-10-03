package Task1;

/** Класс Trapezium, наследник класса Shape
 * 
 * @author Городний Евгений (Evgor)
 * @version 1.0.0
 */
public class Trapezium extends Shape {
	private double a, b, c, d;	//стороны трапеции
	
	/** Конструктор
	 * 
	 * @param a Верхнее основание трапеции
	 * @param b Нижнее основание трапеции
	 * @param c Левая сторона трапеции
	 * @param d Правая сторона трапеции
	 */
	public Trapezium(double a, double b, double c, double d) {
		if ( checkParameters(a, b, c, d) ) {
			this.a = a;
			this.b = b;
			this.c = c;
			this.d = d;
			this.setSquare(square(a, b, c, d));
		} else {
			System.out.println("ERROR!!! The parameters of a trapezium are not correct.");
			System.exit(-1);
		}
		
	}
	
	private boolean checkParameters(double a, double b, double c, double d) {
		if ( (a > 0 ) && (b > 0) && (c > 0) && (d > 0) && (b >= a)) {
			return true;
		} else {
			return false;
		}
	}
	
	private double square(double a, double b, double c, double d) {
		if ( a != b) {
			return (a + b) * Math.sqrt( Math.pow(c, 2) - 
					Math.pow((Math.pow(b - a, 2) + Math.pow(c, 2) - 
					Math.pow(d, 2)) / (2 * (b - a)), 2)) / 2;
		} else { 
			return a * c;
		}
	}
	
	/**Получение значения верхнего основание трапеции
	 * 
	 * @return Верхнее основание трапеции
	 */
	public double getA() {
		return a;
	}
	
	/**Установление значения верхнего основания
	 * 
	 * @param a Новое значение верхнего основания
	 */
	public void setA(double a) {
		if ( checkParameters(a, b, c, d) ) {
			this.a = a;
			this.setSquare(square(a, this.b, this.c, this.d));
		} else {
			System.out.println("ERROR!!! The upper base of the trapezium is wrong.");
			System.exit(-1);
		}
	}
	
	/**Получение значения нижнего основание трапеции
	 * 
	 * @return Нижнее основание трапеции
	 */
	public double getB() {
		return b;
	}
	
	/**Установление значения нижнего основания
	 * 
	 * @param b Новое значение нижнего основания
	 */
	public void setB(double b) {
		if ( checkParameters(a, b, c, d) ) {
			this.b = b;
			this.setSquare(square(this.a, b, this.c, this.d));
		} else {
			System.out.println("ERROR!!! The lower base of the trapezium is wrong.");
			System.exit(-1);
		}
	}

	/**Получение значения левой стороны трапеции
	 * 
	 * @return Левая сторона трапеции
	 */
	public double getC() {
		return c;
	}

	/**Установление значения левой стороны трапеции
	 * 
	 * @param c Новое значение левой стороны трапеции
	 */
	public void setC(double c) {
		if ( checkParameters(a, b, c, d) ) {
			this.c = c;
			this.setSquare(square(this.a, this.b, c, this.d));
		} else {
			System.out.println("ERROR!!! The left side of the trapezium is wrong.");
			System.exit(-1);
		}
	}
	
	/**Получение значения правой стороны трапеции
	 * 
	 * @return Правая сторона трапеции
	 */
	public double getD() {
		return d;
	}
	
	/**Установление значения правой стороны трапеции
	 * 
	 * @param d Новое значение правой стороны трапеции
	 */
	public void setD(double d) {
		if ( checkParameters(a, b, c, d) ) {
			this.d = d;
			this.setSquare(square(this.a, this.b, this.c, d));
		} else {
			System.out.println("ERROR!!! The right side of the trapezium is wrong.");
			System.exit(-1);
		}
	}
	
}
