package Task2;

public class Wheel {
	private int ratius; // Радиус колеса

	Wheel(int radius) {
		if ( ( radius >= 10 ) && ( radius <= 34 ) ) {
			this.ratius = radius;
		} else {
			System.out.println("ERROR!!! Wrong weel radius!");
		}
	}
	
	/** Возвращает радиуса колеса.
	 * 
	 * @return Радиус колеса.
	 */
	public int getRatius() {
		return ratius;
	}
}
