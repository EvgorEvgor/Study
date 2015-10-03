package Task2;

public class Car {
	private String modelName;									//Наименование модели авто
	private Wheel wheel1, wheel2, wheel3, wheel4, spareWheel;	//Колеса автомобиля
	private Engine motor;										//Двигатель автомобиля
	private double maxFuel = 0;									//Объем бака топлива, литры
	private double speed = 0;									//Текущая скорость авто, км/час
	private double currentFuel;									//Текущий объем топлива, литры
	private boolean isBrokenWheel = false;						//Поломанно ли колесо на авто
	private boolean isBrokenCar = false;						//Поломанно ли авто
	
	/**Конструктор
	 * 
	 * @param motor Мотор автомобиля
	 * @param wheel1 Переднее левое колесо
	 * @param wheel2 Переднее правое колесо
	 * @param wheel3 Заднее левое колесо
	 * @param wheel4 Заднее правое колесо
	 * @param spareWheel Запасное колесо
	 */
	public Car(String modelName, Engine motor, 
			   Wheel wheel1, Wheel wheel2, Wheel wheel3, Wheel wheel4, Wheel spareWheel, double maxFuel) {
		this.modelName = modelName;
		this.motor = motor;
		this.wheel1 = wheel1;
		this.wheel2 = wheel2;
		this.wheel3 = wheel3;
		this.wheel4 = wheel4;
		this.spareWheel = spareWheel;
		this.maxFuel = maxFuel;
	}
	
	/** Выполняет перемещение автомобиля
	 * 
	 * @param course Направление движения авто
	 * @param speed Скорость движения авто
	 */
	public void move(double distance, double speed) {
		if ( !isBrokenCar ) {
			motor.start();
			refuel();
			while ( ( currentFuel > 10) && (this.speed < speed) ) {
				motor.setEngineSpeed(motor.getEngineSpeed()+0.1);
				this.speed += 10;
				this.currentFuel -= 9.8;
				distance -= 50;
				System.out.println("Current speed is " + this.speed);
				System.out.println("Current speed engine is " + motor.getEngineSpeed());
				System.out.println("Current fuel is " + currentFuel);
				System.out.println("The remaining distance is " + distance);
			}
			while ( ( distance > 0 ) && ( currentFuel > 10 ) ) {
				this.currentFuel -= 7.9;
				distance -= 100;
				System.out.println("Current fuel is " + currentFuel);
				System.out.println("The remaining distance is " + distance);
			}
			if ( distance <= 0 ) {
				motor.stop();
			} else {
				isBrokenCar = true;
			}
		}
	}
	
	public void refuel() {
		currentFuel = maxFuel;
	}
	
	public void tire(Wheel corruptWheel) {
		if ( !isBrokenWheel ) {
			Wheel buffer;
			
			buffer = corruptWheel;
			corruptWheel = spareWheel;
			spareWheel = buffer;
			System.out.println("YES!!! Broken wheel are changed.");
		} else {
			isBrokenCar = true;
			System.out.println("ERROR!!! Car not have spare wheel. Car is broken!");
		}
	}
	
	/** Получаем наименование модели автомобиля
	 * 
	 * @return Наименование модели автомобиля
	 */
	public String getModelName() {
		return modelName;
	}

	/** Получаем переднее левое колесо
	 * 
	 * @return Переднее левое колесо
	 */
	public Wheel getWheel1() {
		return wheel1;
	}
	
	/** Получаем переднее правое колесо
	 * 
	 * @return Переднее правое колесо
	 */
	public Wheel getWheel2() {
		return wheel2;
	}
	
	/** Получаем заднее левое колесо
	 * 
	 * @return Заднее левое колесо
	 */
	public Wheel getWheel3() {
		return wheel3;
	}

	/** Получаем заднее правое колесо
	 * 
	 * @return Заднее правое колесо
	 */
	public Wheel getWheel4() {
		return wheel4;
	}
	
	/** Получаем запасное колесо
	 * 
	 * @return Запасное колесо
	 */
	public Wheel getSpareWheel() {
		return spareWheel;
	}

	/** Получаем мотор автомобиля
	 * 
	 * @return Мотор автомобиля
	 */
	public Engine getMotor() {
		return motor;
	}

	/** Получаем объем бака автомобиля
	 * 
	 * @return Объем бака автомобиля
	 */
	public double getMaxFuel() {
		return maxFuel;
	}

	/** Получаем тебущую скорость автомобиля
	 * 
	 * @return Текущая скорость автомобиля
	 */
	public double getSpeed() {
		return speed;
	}
	
	/**Получаем текущую скорость автомобиля
	 * 
	 * @return Текущая скорость автомобиля
	 */
	public double getCurrentFuel() {
		return currentFuel;
	}

	/** Получаем текущее состояние запасного колеса
	 * 
	 * @return Состояние запасного колеса
	 */
	public boolean isBrokenWheel() {
		return isBrokenWheel;
	}

	/** Получаем текущее стостояние автомобиля
	 * 
	 * @return Текущее состояние автомобиля
	 */
	public boolean isBrokenCar() {
		return isBrokenCar;
	}

}
