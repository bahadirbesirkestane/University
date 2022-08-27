/** 
* @file Test.cpp
* @description  Avl ağacına eklenecek diziyi dosyadan okuyup dizinin elemanları toplamına göre ağaca düğüm ekleme.
* @course Dersi 2022 Yaz Okulu 1A 
* @assignment Odev 2
* @date 18.08.2022
* @author Bahadır Beşir Kestane G191210088 bahadir.kestane@ogr.sakarya.edu.tr 
*/

#include "AVL.hpp"
#include "Queue.hpp"
#include "ArrayList.hpp"
#include "Radix.hpp"

#include <cmath>
#include <fstream>
#include <string>



void Read(AVL *avlSirala) // Dosyadan okuma işlemini yapan fonksiyon.
{
	fstream dosyaOku;
	
	dosyaOku.open("doc/Sayilar.txt",ios::in );
	
	ArrayList *sonuc =new ArrayList(); // Aktarma arraylisti .
	
	string satir;
	
	string str=" ";
	size_t found=-1 ;
	
	int tmp=0;
	
	int karakter=0;
	
	int sayilarToplami=0;
	
	
	
	
	if(dosyaOku.is_open()) // Dosya okuma.
	{
		
		while(getline(dosyaOku,satir))
		{
			
			do
			{
				found = satir.find(str,found+1); // Boşluk karakterinin yeri bulunuyor.
				
				if (found != string::npos)
				{
					
					karakter=found-tmp;
					
					int sayi=stoi(satir.substr(tmp,karakter));
									
					sayilarToplami+=sayi;
								 
					sonuc->add(sayi); 
					
					
					if(found==satir.length()-1)
					{
						break;
					}
					
					
				}
				else
				{
					int sayi=stoi(satir.substr(tmp,karakter));
											
					
					
					sayilarToplami+=sayi; // sayıların toplamı bulunuyor.
								 
					sonuc->add(sayi); // sayılar arrayliste ekleniyor.
				}
				
				
				tmp=found+1;
			
			}while(found<satir.length()); // satır sonuna kadar okuma işlemi.
			
			
			
			found=-1;
			tmp=0;
			

			int size=sonuc->size();
			int sayilar[size];
			
			for(int i=0;i<size;i++)
			{
				
				sayilar[i]=sonuc->elementAt(i);
				
			}
			
			Radix *radix = new Radix(sayilar,size); // dizi Radix sorta göre siralanıyor.
			
			int *sirali = radix->Sort();
			
			
			
			sonuc->clear();
			
			
			
			for(int i=0;i<size;i++)
			{
				sonuc->add(sirali[i]);
				
			}
			
			
			
			avlSirala->Add(sayilarToplami,sonuc); // AVL ağacına ekleme yapılıyor.
			
			
			
			sonuc->clear();
			 
			sayilarToplami=0;
			
			
			
		}
		
		
	}
	else
	{
		cout<<"Dosya Acilamadi.."<<endl;
	}
	
	
	
	
	delete sonuc;
	dosyaOku.close();
}


int main(){
	
	
	
	AVL *avl = new AVL(); // AVL sınıfından yeni AVL ağacı oluşturuluyor.
	
	Read(avl); // okuma ve ekleme işlemi yapılıyor.
	
	cout<<endl<<"preorder: "<<endl; //Ağaç preorder yaziliyor.
	avl->preorder();
	
	
	delete avl;
	return 0;
}

