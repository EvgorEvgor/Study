package Task1;

/** Класс Ring, наследник класса Shape
 * 
 * @author Городний Евгений (Evgor)
 * @version 1.0.0
 */
public class Ring extends Shape {
	private double radius;	//радиус круга
	
	/** Конструктор
	 * 
	 * @param radius Радиус круга
	 */
	public Ring(double radius) {
		if ( checkParameters(radius) ) {
			this.radius = radius;
			this.setSquare(square(radius));
		} else {
			System.out.println("ERROR!!! The radius of ring is less then 0.");
			System.exit(-1);
		}
	}
	
	/** Проверяет радиуса круга на корректность значения
	 * 
	 * @param radius Радиус круга
	 * @return Возвращает, корректно ли значение радиуса. (true|false)
	 */
	private boolean checkParameters(double radius) {
		if ( radius > 0 ) {
			return true;
		} else {
			return false;
		}
	}
	/** Рассчитывает площадь круга
	 * 
	 * @param radius Радиус круга
	 * @return Площадь круга
	 */
	private double square(double radius) {
		return Math.PI * Math.pow(Math.toRadians(radius), 2);
	}
	
	/** Получение значения радиуса круга
	 * 
	 * @return Радиус круга
	 */
	public double getRadius() {
		return radius;
	}
	
	/** Устанавливает значение радиуса круга
	 * 
	 * @param radius Новый радиус круга.
	 */
	
	public void setRadius(double radius) {
		if ( checkParameters(radius) ) {
			this.radius = radius;
			this.setSquare(square(radius));
		} else {
			System.out.println("ERROR!!! The radius of ring is less then 0.");
			System.exit(-1);
		}
	}

}
