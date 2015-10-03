package Task1;

/**
 * Реализация домашнего задания урока №2
 * Задание №1
 * 
 * Написать максимально расширяемый проект множество Set
 * (множество может содержать различные типы, может быть 
 * реализовано на базе списка, массива и т.д.)
 * 
 * @author Городний Евгений (Evgor)
 * @version 1.0.0
 */
public class Task1 {

	public static void main(String[] args) {
		Container c = new MyArray();	//Множество в виде массива
		Container c1 = new MyArray();	//Множество в виде массива
		Container c3 = new MyList();	//Множество в виде связанного списка

		Set s1 = new Set(c);
		Set s2 = new Set(c1);		
		Set s3 = new Set(c3);
		Set unionTwoSet, intersectionTwoSet;	//результаты объединения и пересечения множеств
		c.add(10);
		c.add(20);
		
		c1.add(20);
		c1.add(30);
		c1.add(40);
		
		System.out.println("Множество 1:");
		s1.print();
		System.out.println("Множество 2:");
		s2.print();
		unionTwoSet = s1.union(s2);
		System.out.println("Объединение ножеств 1 и 2:");
		unionTwoSet.print();
		
		intersectionTwoSet = s1.intersection(s2);
		System.out.println("Пересечение ножеств 1 и 2:");
		intersectionTwoSet.print();
		
		System.out.println("---------------------------------------");
		
		c3.add(40);
		c3.add(50);
		c3.add(60);
		
		System.out.println("Множество 1:");
		s2.print();
		System.out.println("Множество 2:");
		s3.print();
		unionTwoSet = s2.union(s3);
		System.out.println("Объединение ножеств 1 и 2:");
		unionTwoSet.print();
		
		intersectionTwoSet = s2.intersection(s3);
		System.out.println("Пересечение ножеств 1 и 2:");
		intersectionTwoSet.print();
	}

}
