package Task4;

/**
 * Реализация домашнего задания урока №2
 * Задание №4
 * 
 * Дан ряд 1000+1/9+1/99+1/999+…+1/999999 подсчитать слева направо и справа налево,  
 * объяснить разницу в результатах.  
 * 
 * @author Городний Евгений (Evgor)
 * @version 1.0.0
 */
public class Task4 {

	public static void main(String[] args) {
		double result1 = 10000;
		double result2 = 0;
		int divisor = 0;
		
		for( int i = 0; i < 6; i++ ) {
			divisor = 10 * divisor + 9;
			result1 += 1.0 / divisor;
		}
//		System.out.println("divisor = " + divisor);
		for( int i = 0; i < 6; i++ ) {
			result2 += 1.0 / divisor;
			divisor = divisor / 10;
//			System.out.println("divisor = " + divisor);
		}
		result2 += 10000;
		System.out.println("result1 = " + result1);
		System.out.println("result2 = " + result2);
		System.out.println("difference = " + (result2 - result1));
	}

}
