/**
 *
 * @author Bahadýr Beþir Kestane bahadir.kestane@ogr.sakarya.edu.tr
 * @since 17.03.2022
 *        <p>
 *        Çalýþtýrýlabilir Sýnýf
 *        </p>
 */

import java.io.BufferedReader;
import java.io.FileNotFoundException;
import java.io.FileReader;
import java.io.IOException;


public class Program {

	public static void main(String[] args) throws IOException {
		// TODO Auto-generated method stub

		String dosyaAdi = args[0];

		try {

			FileReader dosyayioku = new FileReader(dosyaAdi);       //
																    // Dosya okuma islemleri.
			BufferedReader okuma1 = new BufferedReader(dosyayioku); //

			Lexical.calistir(okuma1); // Lexical sýnýfýna ait calistir(BufferedReader) metodunu çaðýrdýk.

			okuma1.close(); // Dosya kapandý.

		} catch (FileNotFoundException e) {

			e.printStackTrace();
		}

	}

}
