package Task1;

/**
 * Реализация домашнего задания урока №1
 * Задание №1
 * 
 * Допустимыми фигурами являются круг Ring, треугольник Triangle, 
 * параллелограмм Parallelogram и трапеция Trapezium. 
 * В классе допустимых фигур Shape определить операцию сложения, 
 * если суммой фигур служит сумма их площадей.
 * 
 * @author Городний Евгений (Evgor)
 * @version 1.0.0
 */
public class Task1 {

	public static void main(String[] args) {
		Ring ring1 = new Ring(10);
		Triangle triangle1 = new Triangle(10, 20, 25);
		Parallelogram parallelogram1 = new Parallelogram(20, 10, 30);
		Trapezium trapezium1 = new Trapezium(20,20,10,10);
		
		System.out.println("Square of the ring are " + ring1.getSquare());
		System.out.println("Square of the triangle are " + triangle1.getSquare());
		System.out.println("Square of the parallelogram are " + parallelogram1.getSquare());
		System.out.println("Square of the trapezium are " + trapezium1.getSquare());
		System.out.println();
		System.out.println("Sum the trapezium and the parallelogram are " + trapezium1.sum(parallelogram1));
	}

}
