package Task2;

/**
 * Реализация домашнего задания урока №1
 * Задание №2
 * Вариант №2
 * 
 * Создать объект класса Автомобиль, используя классы Колесо, Двигатель.
 * Методы: ехать, заправляться, менять колесо, 
 * вывести на консоль марку автомобиля.
 * 
 * @author Городний Евгений (Evgor)
 * @version 1.0.0
 */
public class Task2 {

	public static void main(String[] args) {
		Car f1Car = new Car("Honda Accord 2006",new Engine(1.8, 160), 
							new Wheel(16), new Wheel(16), new Wheel(16), new Wheel(16), new Wheel(16), 60);
		f1Car.move(1000, 90);
		f1Car.tire(f1Car.getWheel1());
		System.out.println("The model name of car is " + f1Car.getModelName());
	}

}
