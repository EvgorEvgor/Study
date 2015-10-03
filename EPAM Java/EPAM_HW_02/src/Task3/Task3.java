package Task3;

/**
 * Реализация домашнего задания урока №2
 * Задание №3
 * 
 * Написать функцию, которая выставляет бит номер pos в значение 1 или 0. 
 * Т.е. реализовать функцию void f(int a, int pos, boolean flag). 
 * Если flag=true, то необходимо в a выставить бит pos в значение 1. 
 * Если flag=false, выставить бит в значение 0.
 * 
 * @author Городний Евгений (Evgor)
 * @version 1.0.0
 */
public class Task3 {
	
	public static void f(int a, int pos, boolean flag) {
		int bitsOfInt = 32;				//Размерность типа "int"
		int mask;					//Устанавливаемый бит
		
		//Проверяем корректность значениия pos 
		if ( ( pos < 0 ) || ( pos >= bitsOfInt ) ) {
			System.out.println("Не корректное значение параметра 'pos'");
			return;
		}
		
		//Проверяем установку 0 или 1
		if ( flag == true ) {	
			mask = 1 << pos;
			a |= mask;
		} else {
			mask = 1 << pos;
			mask ^= -1;
			a &= mask;
		}
		//Печатаем результат установки бита
		print(a);
	}
	
	public static void print(int a) {
		int bitsOfInt = 32;
		int mask = 1;
		int result;
		
		System.out.print("a = ");
		for ( int i = bitsOfInt - 1; i > 0; i-- ) {
			result = a >>> i;
			System.out.print((result & mask));
		}
		System.out.println((a & mask));
	}
	
	public static void main(String[] args) {
//		print(Integer.MIN_VALUE + 1);
//		print(Integer.MAX_VALUE - 1);
//		print(-1);
		
		print(Integer.MIN_VALUE);
		f(Integer.MIN_VALUE, 0, true);
		f(Integer.MIN_VALUE, 1, true);
		f(Integer.MIN_VALUE, 14, true);
		f(Integer.MIN_VALUE, 15, true);
		f(Integer.MIN_VALUE, 16, true);
		f(Integer.MIN_VALUE, 17, true);
		f(Integer.MIN_VALUE, 30, true);
		f(Integer.MIN_VALUE, 31, true);
		f(Integer.MIN_VALUE, 32, true);
		f(Integer.MIN_VALUE, -1, true);
		System.out.println("--------------------------------------");
		print(Integer.MAX_VALUE);
		f(Integer.MAX_VALUE, 0, false);
		f(Integer.MAX_VALUE, 1, false);
		f(Integer.MAX_VALUE, 14, false);
		f(Integer.MAX_VALUE, 15, false);
		f(Integer.MAX_VALUE, 16, false);
		f(Integer.MAX_VALUE, 17, false);
		f(Integer.MAX_VALUE, 30, false);
		f(Integer.MAX_VALUE, 31, false);
		f(Integer.MAX_VALUE, 32, false);
		f(Integer.MAX_VALUE, -1, false);
		System.out.println("--------------------------------------");

	}
	
}
