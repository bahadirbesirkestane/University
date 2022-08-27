/**
*
* @author Bahad�r Be�ir Kestane  bahadir.kestane@ogr.sakarya.edu.tr
* @since 17.03.2022
* <p>
*     Operat�r ve Operand bilgisini tutan s�n�f.
* </p>
*/

import java.io.BufferedReader;
import java.io.IOException;
import java.util.regex.Matcher;
import java.util.regex.Pattern;
import java.util.ArrayList;
import java.util.List;

public class Lexical {

	static int sayacTekli;
	static int sayacIkili;
	static int sayacSayisal;
	static int sayacIliskisel;
	static int sayacMantiksal;

	static int sayacOperand;

	public static void calistir(BufferedReader okuma) throws IOException {

		

		
		
		

			/*
			 * Pattern'ler
			 */
		    Pattern ikiSlash = Pattern.compile("//"); // �ki slash l� yorum sat�r�n� bulan Regex ifadesi.
		     
			Pattern yorumSatiri = Pattern.compile("^\\s+[*|/]|^[*|/]"); // Yorum sat�rlar�n� bulan Regex ifadesi.
			
			Pattern bosSatir = Pattern.compile("\\s+"); // Bos sat�rlar� bulan regex ifadesi.

			Pattern tekliOperator = Pattern.compile("[+-]{2}");  //Tekli operta�rleri bulan regex ifadesi.
			
			Pattern artiEksi_TekliOp=Pattern.compile("[=(\\s][+-]{1}[(]?\\w[)]?"); // Tekli + ve - operat�rleri bulan regex ifadesi.
			
			
			
			Pattern ikiliOperator = Pattern.compile("(\\w|\\s)([-+*/=]{1})(\\s|\\w)"); // �kili operta�rleri bulan regex ifadesi.
			
			    
			
			Pattern sayisalOperator = Pattern.compile("(\\w|\\s)[%&|^]{1}(\\w|\\s)"); // Say�sal operta�rleri bulan regex ifadesi.
			
			    
			
			Pattern atamaliSayisalOp=Pattern.compile("(\\w|\\s)([-+*/%&^]{1}[=]{1})(\\s|\\w)"); // Atamal� say�sal operta�rleri bulan regex ifadesi.
			
			Pattern iliskiselOperator = Pattern.compile("(\\w|\\s)[<>=!]{1}[=](\\s|\\w)"); // �li�kisel operta�rleri bulan regex ifadesi.
			
			Pattern iliskiselTekliler=Pattern.compile("(\\w|\\s)[<>]{1}(\\s|\\w)"); // ili�kisel operta�rleri bulan regex ifadesi.
			
			Pattern mantiksalOperator = Pattern.compile("(\\w|\\s)[&|]{2}(\\s|\\w)"); // Mant�ksal operta�rleri bulan regex ifadesi.
			
			Pattern mantiksalUnlemOp=Pattern.compile("(!{1}\\s*\\w)"); // Mant�ksal �nlem operat�r�n� bulan regex ifadesi.

			

			/*
			 * Matcher tan�mlamalar�
			 */
			Matcher eslenenIkiSlash; 
			Matcher eslenenYorum;
			Matcher eslenenBosSatir;

			Matcher eslenenTekli;
			Matcher eslenenArtiEksi_Tekli;
			
			Matcher eslenenIkili;
			
			Matcher eslenenSayisal;
			
			Matcher eslenenAtamaliSayisal;
			Matcher eslenenIliskisel;
			Matcher eslenenTekliIliskisel;
			Matcher eslenenMantiksal;
			Matcher eslenenUnlem;
			

			String satir; // Satirlar� okumak i�in bir string
			
			List<String> gerekli_satirlar = new ArrayList<>();  // Dosya i�indeki Sat�rlar� aktraca��m�z arrayList
			
			

			                                           // Laz�m olan (gerekli) sat�rlar� bir Array liste aktar�lmas�-
			while ((satir = okuma.readLine()) != null) // -i�in bir while d�ng�s� a�t�k..
			{

				eslenenYorum = yorumSatiri.matcher(satir); // Matcher ile sat�r sat�r regex ifadesi e�le�mesi yap�l�yor.
				eslenenBosSatir = bosSatir.matcher(satir); // Bos satir Matcher'�.
				eslenenIkiSlash=ikiSlash.matcher(satir);   // iki Slash mather'�.

				if (eslenenYorum.find() != true && eslenenBosSatir.find() == true) {  // Laz�m olan (gerekli) sat�rlar� bir Array Liste aktar�ld�
					                                                                 
					if(eslenenIkiSlash.find()==true)
					{
						satir=satir.substring(0, eslenenIkiSlash.start());
					}
					
					gerekli_satirlar.add(satir);     
												     
          
					

				}
				

			}
			
		
			String[] satirlar = new String[gerekli_satirlar.size()]; // Sistemde gereksiz yer kaplamamas� i�in aktar�m
																	 // yap�lacak dizi.

			for (int i = 0; i < gerekli_satirlar.size(); i++) {

				satirlar[i] = gerekli_satirlar.get(i);

			}
			
			

			for (int i = 0; i < satirlar.length; i++) {  // her gerekli satir i�in d�nen for

				
				
				/*
				 *Matcher'lar� her sat�rla e�le�mtirdik.
				 * 
				 */
				
				eslenenTekli = tekliOperator.matcher(satirlar[i]);
				eslenenArtiEksi_Tekli=artiEksi_TekliOp.matcher(satirlar[i]);
				
				eslenenIkili = ikiliOperator.matcher(satirlar[i]);
				
				eslenenSayisal=sayisalOperator.matcher(satirlar[i]);
				
				eslenenAtamaliSayisal=atamaliSayisalOp.matcher(satirlar[i]);
				eslenenIliskisel=iliskiselOperator.matcher(satirlar[i]);
				eslenenTekliIliskisel=iliskiselTekliler.matcher(satirlar[i]);
				eslenenMantiksal=mantiksalOperator.matcher(satirlar[i]);
				eslenenUnlem=mantiksalUnlemOp.matcher(satirlar[i]);
				
				/*
				 * boolean tan�mlamalar� if ler i�in olu�turuldu e�le�me do�rulu�unu bulmak i�in.
				 * 
				 * direkt if'in i�inde matcher.find() kullan�ld���nda her �a��r�ld���nda bir sonrakini buldu�u i�in yanl�� ��k�yor
				 * 
				 * */
				
				boolean eslenenTekli_Bo=eslenenTekli.find();       
				
				boolean eslenenArtiEksi_Tekli_Bo=eslenenArtiEksi_Tekli.find();
				
				boolean eslenenUnlem_Bo=eslenenUnlem.find();
 
                boolean eslenenSayisalOp=eslenenSayisal.find();
				
				boolean eslenenAtamliSayisalOp=eslenenAtamaliSayisal.find();
				
				boolean eslenenIliskisel_Bo=eslenenIliskisel.find();
				
				boolean eslenenTekliIliskisel_Bo=eslenenTekliIliskisel.find();
				
				boolean eslenenMantiksal_Bo=eslenenMantiksal.find();
				
				
				
				if (eslenenTekli_Bo==true || eslenenUnlem_Bo==true || eslenenArtiEksi_Tekli_Bo==true )   // Tekli operat�rler bulunuyor.
				{
					long eslemeSayisi1;
					long eslemeSayisi2;
					long eslemeSayisi3;
				
					if(eslenenTekli_Bo==true) // -- ve ++ operat�rleri
					{
						eslemeSayisi1=(eslenenTekli.results().count() + 1); // E�le�me say�s�.
						
						sayacTekli+=eslemeSayisi1;
						sayacSayisal+=eslemeSayisi1;
						sayacOperand+=eslemeSayisi1;
					}
					
					if(eslenenUnlem_Bo==true) // �nlem opert�r� 
					{
						eslemeSayisi2=(eslenenUnlem.results().count() + 1); // E�le�me say�s�.
						
						sayacTekli+=eslemeSayisi2;
						sayacSayisal+=eslemeSayisi2;
						sayacOperand+=eslemeSayisi2;
						
						sayacMantiksal+=eslemeSayisi2;
					}
					
					if(eslenenArtiEksi_Tekli_Bo==true) // tekli + ve - operat�r�
					{
						eslemeSayisi3=(eslenenArtiEksi_Tekli.results().count() + 1);
						
						sayacTekli+=eslemeSayisi3;
						sayacSayisal+=eslemeSayisi3;
						sayacOperand+=eslemeSayisi3;
					}
					
					
					
					
				} 
				
				if (eslenenIkili.find() == true)  // �kili operat�rler bulunuyor.
				{
					long eslemeSayisi=(eslenenIkili.results().count() + 1); // E�le�me say�s�.
					
					
						
								
						sayacIkili += eslemeSayisi;
                        sayacSayisal += eslemeSayisi;
                        sayacOperand+=eslemeSayisi*2;
                        
                        
                        
                        
				}
				
				
				
				if (eslenenSayisalOp ==true || eslenenAtamliSayisalOp==true ) // Sayisal operat�rler bulunuyor.
			    {
					long eslemeSayisi;
					long eslemeSayisi1;
					
					
					if(eslenenSayisalOp ==true) // tekli sayisal operat�rler
					{
						
							eslemeSayisi1=(eslenenSayisal.results().count() + 1);
							
							sayacSayisal += eslemeSayisi1;
							sayacIkili+=eslemeSayisi1;
							sayacOperand+=eslemeSayisi1*2;
							
							
							
							
						
					}
					
					if(eslenenAtamliSayisalOp==true) // Atamal� say�sal opert�rler
					{
						
							eslemeSayisi=(eslenenAtamaliSayisal.results().count() + 1); // E�le�me say�s�.
							
							sayacSayisal += eslemeSayisi;
							sayacIkili+=eslemeSayisi;
							sayacOperand+=eslemeSayisi*2;
							
							
							
					}
					
					
					
					
					
				}
				
				if(eslenenIliskisel_Bo==true || eslenenTekliIliskisel_Bo==true) // �li�kisel operat�rler bulunuyor.
				{
					
					long eslemeSayisi1;
					long eslemeSayisi2;
					
					if(eslenenIliskisel_Bo==true)
					{
						eslemeSayisi1=(eslenenIliskisel.results().count() + 1); // E�le�me say�s�.
						
						sayacIliskisel+=eslemeSayisi1;
						
						sayacOperand+=eslemeSayisi1*2;
						
						
					}
					
					if(eslenenTekliIliskisel_Bo==true)
					{
						eslemeSayisi2=(eslenenTekliIliskisel.results().count() + 1); // E�le�me say�s�.
						
						sayacIliskisel+=eslemeSayisi2;
						
						sayacOperand+=eslemeSayisi2*2;
						
						
					}
					
					
					
					
					
					
				}
				
				
				
				if(eslenenMantiksal_Bo==true )  // Mant�ksal operat�rler bulunuyor.
				{
                    long eslemeSayisi=eslenenMantiksal.results().count()+1;
					
                    
					
					sayacMantiksal+=eslemeSayisi;
					
					sayacOperand+=eslemeSayisi*2;
					
					
					
				}
				
				
				
				
				
			}
			
			
			/*
			 * Bilgiler ekrana yazd�r�l�yor. 
			 */
			
			System.out.println("Operat�r Bilgisi:");
			
			System.out.println("\tTekli Operat�r Say�s�: " + sayacTekli);

			System.out.println("\t�kili Operat�r Say�s�: " + sayacIkili);
				
			System.out.println("\tSayisal Operat�r Say�s�: " + sayacSayisal);
			
			System.out.println("\t�li�kisel Operat�r Say�s�: " + sayacIliskisel);
			
			System.out.println("\tMant�ksal Operat�r Say�s�: " + sayacMantiksal);
			
			System.out.println("Operand bilgisi:");
			
			System.out.println("\tOperand Say�s�: " + sayacOperand);

			
			
			

		
	}

}
