package Task2;

public class Engine {
	private double volume;				// Объем двигателя
	private double power;				// Мощность двигателя
	private boolean isWorking = false;	// Включен ли двигатель
	private double engineSpeed;			// Обороты двигателя x10000 об/минуту
	
	/**Конструктор
	 * 
	 * @param volume Объем двигателя
	 * @param power Мощность двигателя
	 */
	public Engine(double volume, double power) {
		this.volume = volume;
		this.power = power;
	}
	
	/** Запуск двигателя
	 */
	public void start() {
		if ( !isWorking ) {
			isWorking = true;
			engineSpeed = 1;
		}
	}
	
	/** Остановка двигателя
	 */
	public void stop() {
		if ( isWorking ) {
			isWorking = false;
			engineSpeed = 0;
		}
	}
	/** Получение значения объема двигателя.
	 * 
	 * @return Объем двигателя.
	 */
	public double getVolume() {
		return volume;
	}

	/** Получение значения мощности двигателя.
	 * 
	 * @return Пощность двигателя.
	 */
	public double getPower() {
		return power;
	}

	/** Получение текущего кол-ва оборотов двигателя x10000 об/минуту
	 * 
	 * @return Текущее кол-во оборотов двигателя
	 */
	public double getEngineSpeed() {
		return engineSpeed;
	}
	
	/** Установка текущего кол-ва оборотов двигателя x10000 об/минуту
	 * 
	 * @param engineSpeed Устанавливаемое текущеее кол-во оборотов двигателя
	 */
	public void setEngineSpeed(double engineSpeed) {
		if ( isWorking ) {
			if ( engineSpeed > 1 ) {
				this.engineSpeed = engineSpeed;
			} else {
				System.out.println("ERROR!!! Very low engine speed!");
			}
		} else {
			System.out.println("ERROR!!! Engine is not start!");
		}
	}
}
