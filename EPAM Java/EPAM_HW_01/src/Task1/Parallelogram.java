package Task1;

/** Класс Parallelogram, наследник класса Shape
 * 
 * @author Городний Евгений (Evgor)
 * @version 1.0.0
 */
public class Parallelogram extends Shape {
	private double a, b;	//стороны параллелограмма
	private double alpha;	//угол в  параллелограмме между сторонами a и b
	
	/** Конструктор 
	 * 
	 * @param a Сторона A параллелограмма
	 * @param b Сторона B параллелограмма
	 * @param alpha Угол между сторонами A и B у параллелограмма
	 */
	public Parallelogram(double a, double b, double alpha) {
		if ( checkParameters(a, b, alpha) ) {
			this.a = a;
			this.b = b;
			this.alpha = alpha;
			this.setSquare(square(a, b, alpha));
		} else {
			System.out.println("ERROR!!! The parameters of a parallelogram are not correct.");
			System.exit(-1);
		}
	}
	
	/**Проверяет параметры параллелограмма на корректность значений
	 * 
	 * @param a Сторона A параллелограмма
	 * @param b Сторона B параллелограмма
	 * @param alpha Угол между сторонами A и B у параллелограмма
	 * @return Возвращает, корректно ли значение параметров параллелограмма. (true|false)
	 */
	private boolean checkParameters(double a, double b, double alpha) {
		if ( (a > 0 ) && (b > 0) && (alpha <= 90) ) {
			return true;
		} else {
			return false;
		}
	}
	
	/** Рассчитывает площадь параллелограмма
	 * 
	 * @param a Сторона A параллелограмма
	 * @param b Сторона B параллелограмма
	 * @param alpha Угол между сторонами A и B у параллелограмма
	 * @return Площадь параллелограмма
	 */
	private double square(double a, double b, double alpha) {
		return a * b * Math.sin(Math.toRadians(alpha));	//S = a * b * sin(alpha)
	}
	
	/** Получение значения стороны A параллелограмма.
	 * 
	 * @return Значение стороны A параллелограмма.
	 */
	public double getA() {
		return a;
	}

	/** Установление значение стороны A параллелограмма.
	 * 
	 * @param a Новое значение стороны A параллелограмма.
	 */
	public void setA(double a) {
		if ( checkParameters(a, this.b, this.alpha) ) {
			this.a = a;
			this.setSquare(square(a, this.b, this.alpha));
		} else {
			System.out.println("ERROR!!! The parameter A of a parallelogram are not correct.");
			System.exit(-1);
		}
	}

	/** Получение значения стороны B параллелограмма.
	 * 
	 * @return Значение стороны B параллелограмма.
	 */
	public double getB() {
		return b;
	}

	/** Установление значение стороны B параллелограмма.
	 * 
	 * @param a Новое значение стороны B параллелограмма.
	 */
	public void setB(double b) {
		if ( checkParameters(this.a, b, this.alpha) ) {
			this.b = b;
			this.setSquare(square(this.a, b, this.alpha));
		} else {
			System.out.println("ERROR!!! The parameter B of a parallelogram are not correct.");
			System.exit(-1);
		}
	}

	/** Получение значения угла между сторонами A и B у параллелограмма
	 * 
	 * @return Значение угла между сторонами A и B у параллелограмма
	 */
	public double getAlpha() {
		return alpha;
	}
	
	/** Установление значение угла между сторонами A и B у параллелограмма
	 * 
	 * @param a Новое значение угла между сторонами A и B у параллелограмма
	 */
	public void setAlpha(double alpha) {
		if ( checkParameters(this.a, this.b, alpha) ) {
			this.alpha = alpha;
			this.setSquare(square(this.a, this.b, alpha));
		} else {
			System.out.println("ERROR!!! The parameter ALPHA of a parallelogram are not correct.");
			System.exit(-1);
		}
	}
	
	
}
