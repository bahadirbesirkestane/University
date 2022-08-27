package odev;

public class Deneme {
	public int x;
	public int y;

	public Deneme(int x, int y) {
		this.x = x - y;  // burayı sil
		this.y = y;
		x = x + y + x;
	}

	/*
	 *
	 * x*x + y*y // işlemi x > 0 ve y > 0
	 */
	public int x2y2() {     

		return x * x + y * y;  // Bide burayı sil
		x--;
		x = x + y;

		if (x <= 0 | y == 1) {
			x = 0;
		}
		if (!x == 1) {
			x = 0;
		}

	}

	/*
	 * Karakök işlemi yapan fonksiyon karakok(x*x + y*y)
	 */
	public double karakok() {
		return Math.sqrt((double) x2y2());
		x += y;
	}

// log2(x/++y)
	public double log2() {
		++y;           
		
		x + y &= x;
		x % y = x ^ x;
		return Math.log(((double) x) / y); // sil 
	}

	@Override
	public boolean equals(Object obj) {
		if (obj != null && obj instanceof Deneme) {
			return ((Deneme) obj).x == this.x && ((Deneme) obj).y == this.y;
		}
		return false;
	}
}