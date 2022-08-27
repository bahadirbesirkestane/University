/**
*
* @author Bahadýr Beþir Kestane  bahadir.kestane@ogr.sakarya.edu.tr
* @since 17.03.2022
* <p>
*     Operatör ve Operand bilgisini tutan sýnýf.
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
		    Pattern ikiSlash = Pattern.compile("//"); // Ýki slash lý yorum satýrýný bulan Regex ifadesi.
		     
			Pattern yorumSatiri = Pattern.compile("^\\s+[*|/]|^[*|/]"); // Yorum satýrlarýný bulan Regex ifadesi.
			
			Pattern bosSatir = Pattern.compile("\\s+"); // Bos satýrlarý bulan regex ifadesi.

			Pattern tekliOperator = Pattern.compile("[+-]{2}");  //Tekli opertaörleri bulan regex ifadesi.
			
			Pattern artiEksi_TekliOp=Pattern.compile("[=(\\s][+-]{1}[(]?\\w[)]?"); // Tekli + ve - operatörleri bulan regex ifadesi.
			
			
			
			Pattern ikiliOperator = Pattern.compile("(\\w|\\s)([-+*/=]{1})(\\s|\\w)"); // Ýkili opertaörleri bulan regex ifadesi.
			
			    
			
			Pattern sayisalOperator = Pattern.compile("(\\w|\\s)[%&|^]{1}(\\w|\\s)"); // Sayýsal opertaörleri bulan regex ifadesi.
			
			    
			
			Pattern atamaliSayisalOp=Pattern.compile("(\\w|\\s)([-+*/%&^]{1}[=]{1})(\\s|\\w)"); // Atamalý sayýsal opertaörleri bulan regex ifadesi.
			
			Pattern iliskiselOperator = Pattern.compile("(\\w|\\s)[<>=!]{1}[=](\\s|\\w)"); // Ýliþkisel opertaörleri bulan regex ifadesi.
			
			Pattern iliskiselTekliler=Pattern.compile("(\\w|\\s)[<>]{1}(\\s|\\w)"); // iliþkisel opertaörleri bulan regex ifadesi.
			
			Pattern mantiksalOperator = Pattern.compile("(\\w|\\s)[&|]{2}(\\s|\\w)"); // Mantýksal opertaörleri bulan regex ifadesi.
			
			Pattern mantiksalUnlemOp=Pattern.compile("(!{1}\\s*\\w)"); // Mantýksal ünlem operatörünü bulan regex ifadesi.

			

			/*
			 * Matcher tanýmlamalarý
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
			

			String satir; // Satirlarý okumak için bir string
			
			List<String> gerekli_satirlar = new ArrayList<>();  // Dosya içindeki Satýrlarý aktracaðýmýz arrayList
			
			

			                                           // Lazým olan (gerekli) satýrlarý bir Array liste aktarýlmasý-
			while ((satir = okuma.readLine()) != null) // -için bir while döngüsü açtýk..
			{

				eslenenYorum = yorumSatiri.matcher(satir); // Matcher ile satýr satýr regex ifadesi eþleþmesi yapýlýyor.
				eslenenBosSatir = bosSatir.matcher(satir); // Bos satir Matcher'ý.
				eslenenIkiSlash=ikiSlash.matcher(satir);   // iki Slash mather'ý.

				if (eslenenYorum.find() != true && eslenenBosSatir.find() == true) {  // Lazým olan (gerekli) satýrlarý bir Array Liste aktarýldý
					                                                                 
					if(eslenenIkiSlash.find()==true)
					{
						satir=satir.substring(0, eslenenIkiSlash.start());
					}
					
					gerekli_satirlar.add(satir);     
												     
          
					

				}
				

			}
			
		
			String[] satirlar = new String[gerekli_satirlar.size()]; // Sistemde gereksiz yer kaplamamasý için aktarým
																	 // yapýlacak dizi.

			for (int i = 0; i < gerekli_satirlar.size(); i++) {

				satirlar[i] = gerekli_satirlar.get(i);

			}
			
			

			for (int i = 0; i < satirlar.length; i++) {  // her gerekli satir için dönen for

				
				
				/*
				 *Matcher'larý her satýrla eþleþmtirdik.
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
				 * boolean tanýmlamalarý if ler için oluþturuldu eþleþme doðruluðunu bulmak için.
				 * 
				 * direkt if'in içinde matcher.find() kullanýldýðýnda her çaðýrýldýðýnda bir sonrakini bulduðu için yanlýþ çýkýyor
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
				
				
				
				if (eslenenTekli_Bo==true || eslenenUnlem_Bo==true || eslenenArtiEksi_Tekli_Bo==true )   // Tekli operatörler bulunuyor.
				{
					long eslemeSayisi1;
					long eslemeSayisi2;
					long eslemeSayisi3;
				
					if(eslenenTekli_Bo==true) // -- ve ++ operatörleri
					{
						eslemeSayisi1=(eslenenTekli.results().count() + 1); // Eþleþme sayýsý.
						
						sayacTekli+=eslemeSayisi1;
						sayacSayisal+=eslemeSayisi1;
						sayacOperand+=eslemeSayisi1;
					}
					
					if(eslenenUnlem_Bo==true) // ünlem opertörü 
					{
						eslemeSayisi2=(eslenenUnlem.results().count() + 1); // Eþleþme sayýsý.
						
						sayacTekli+=eslemeSayisi2;
						sayacSayisal+=eslemeSayisi2;
						sayacOperand+=eslemeSayisi2;
						
						sayacMantiksal+=eslemeSayisi2;
					}
					
					if(eslenenArtiEksi_Tekli_Bo==true) // tekli + ve - operatörü
					{
						eslemeSayisi3=(eslenenArtiEksi_Tekli.results().count() + 1);
						
						sayacTekli+=eslemeSayisi3;
						sayacSayisal+=eslemeSayisi3;
						sayacOperand+=eslemeSayisi3;
					}
					
					
					
					
				} 
				
				if (eslenenIkili.find() == true)  // Ýkili operatörler bulunuyor.
				{
					long eslemeSayisi=(eslenenIkili.results().count() + 1); // Eþleþme sayýsý.
					
					
						
								
						sayacIkili += eslemeSayisi;
                        sayacSayisal += eslemeSayisi;
                        sayacOperand+=eslemeSayisi*2;
                        
                        
                        
                        
				}
				
				
				
				if (eslenenSayisalOp ==true || eslenenAtamliSayisalOp==true ) // Sayisal operatörler bulunuyor.
			    {
					long eslemeSayisi;
					long eslemeSayisi1;
					
					
					if(eslenenSayisalOp ==true) // tekli sayisal operatörler
					{
						
							eslemeSayisi1=(eslenenSayisal.results().count() + 1);
							
							sayacSayisal += eslemeSayisi1;
							sayacIkili+=eslemeSayisi1;
							sayacOperand+=eslemeSayisi1*2;
							
							
							
							
						
					}
					
					if(eslenenAtamliSayisalOp==true) // Atamalý sayýsal opertörler
					{
						
							eslemeSayisi=(eslenenAtamaliSayisal.results().count() + 1); // Eþleþme sayýsý.
							
							sayacSayisal += eslemeSayisi;
							sayacIkili+=eslemeSayisi;
							sayacOperand+=eslemeSayisi*2;
							
							
							
					}
					
					
					
					
					
				}
				
				if(eslenenIliskisel_Bo==true || eslenenTekliIliskisel_Bo==true) // Ýliþkisel operatörler bulunuyor.
				{
					
					long eslemeSayisi1;
					long eslemeSayisi2;
					
					if(eslenenIliskisel_Bo==true)
					{
						eslemeSayisi1=(eslenenIliskisel.results().count() + 1); // Eþleþme sayýsý.
						
						sayacIliskisel+=eslemeSayisi1;
						
						sayacOperand+=eslemeSayisi1*2;
						
						
					}
					
					if(eslenenTekliIliskisel_Bo==true)
					{
						eslemeSayisi2=(eslenenTekliIliskisel.results().count() + 1); // Eþleþme sayýsý.
						
						sayacIliskisel+=eslemeSayisi2;
						
						sayacOperand+=eslemeSayisi2*2;
						
						
					}
					
					
					
					
					
					
				}
				
				
				
				if(eslenenMantiksal_Bo==true )  // Mantýksal operatörler bulunuyor.
				{
                    long eslemeSayisi=eslenenMantiksal.results().count()+1;
					
                    
					
					sayacMantiksal+=eslemeSayisi;
					
					sayacOperand+=eslemeSayisi*2;
					
					
					
				}
				
				
				
				
				
			}
			
			
			/*
			 * Bilgiler ekrana yazdýrýlýyor. 
			 */
			
			System.out.println("Operatör Bilgisi:");
			
			System.out.println("\tTekli Operatör Sayýsý: " + sayacTekli);

			System.out.println("\tÝkili Operatör Sayýsý: " + sayacIkili);
				
			System.out.println("\tSayisal Operatör Sayýsý: " + sayacSayisal);
			
			System.out.println("\tÝliþkisel Operatör Sayýsý: " + sayacIliskisel);
			
			System.out.println("\tMantýksal Operatör Sayýsý: " + sayacMantiksal);
			
			System.out.println("Operand bilgisi:");
			
			System.out.println("\tOperand Sayýsý: " + sayacOperand);

			
			
			

		
	}

}
