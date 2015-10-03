package Task2;

/**
 * Реализация домашнего задания урока №2
 * Задание №2
 * 
 * Используя только побитовые операции полдсчитать размер переменных 
 * различных типов
 * 
 * @author Городний Евгений (Evgor)
 * @version 1.0.0
 */
public class Task2 {
	
	public static void main(String[] args) {
		byte b = 1;				//Начальное значение для подсчета бит в типе данных "byte"
		short s = 1;			//Начальное значение для подсчета бит в типе данных "short"
		int i = 1;				//Начальное значение для подсчета бит в типе данных "int"
		long l = 1;				//Начальное значение для подсчета бит в типе данных "long"
		float f = 0;			//Начальное значение для подсчета бит в типе данных "float"
		int fl;
		double d = 0;			//Начальное значение для подсчета бит в типе данных "double"
		long dl;
		int countOfBits = 0;	//Количество бит в типе данных
		
		/*
		 * Считаем ко-во бит для типа "byte"
		 */
		while ( b != 0 ) {
			b <<= 1;
			countOfBits += 1;
		}
		System.out.println("Count bits of 'byte' type is " + countOfBits + "bits");
		
		/*
		 * Считаем ко-во бит для типа "short"
		 */
		countOfBits = 0;
		while ( s != 0 ) {
			s <<= 1;
			countOfBits += 1;
		}
		System.out.println("Count bits of 'short' type is " + countOfBits + "bits");
		
		/*
		 * Считаем ко-во бит для типа "int"
		 */
		countOfBits = 0;
		while ( i != 0 ) {
			i <<= 1;
			countOfBits += 1;
		}
		System.out.println("Count bits of 'int' type is " + countOfBits + "bits");
		
		/*
		 * Считаем ко-во бит для типа "long"
		 */
		countOfBits = 0;
		while ( l != 0 ) {
			l <<= 1;
			countOfBits += 1;
		}
		System.out.println("Count bits of 'long' type is " + countOfBits + "bits");
		
		/*
		 * Считаем ко-во бит для типа "float"
		 */
		countOfBits = 0;
		fl = Float.floatToRawIntBits(f) | 1;
		while ( fl != 0 ) {
			fl <<= 1;
			countOfBits += 1;
		}
		System.out.println("Count bits of 'float' type is " + countOfBits + "bits");
		
		/*
		 * Считаем ко-во бит для типа "double"
		 */
		countOfBits = 0;
		dl = Double.doubleToRawLongBits(d) | 1;
		while ( dl != 0 ) {
			dl <<= 1;
			countOfBits += 1;
		}
		System.out.println("Count bits of 'double' type is " + countOfBits + "bits");
	}
}
