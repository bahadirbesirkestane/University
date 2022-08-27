/** 
* @file ArrayList.cpp
* @description Test.cpp'deki islemleri yapabilmek icin tanimlanan baslık dosyasındaki metotların govdeleri.
* @course Dersi 2022 Yaz Okulu 1A 
* @assignment Odev 1
* @date 05.08.2022
* @author Bahadır Beşir Kestane G191210088 bahadir.kestane@ogr.sakarya.edu.tr 
*/

#include "ArrayList.hpp"

void ArrayList::reserve(int newCapacity)   // private alanda dizi tasması olduğunda eleman eklemek icin dizinin kapasitesini 
{										   // arttırıyormus gibi yeni dizi olusturup,yeni adresi items gosteriyor.		
	int *tmp= new int[newCapacity];
	
	for(int i=0;i<length;i++)
	{
		tmp[i]=items[i];
	}
	
	delete [] items;			
	items=tmp;
	capacity=newCapacity;
}
ArrayList::ArrayList()
{
	capacity=100;
	length=0;
	items=new int[capacity];
}

ArrayList::ArrayList( ArrayList &right) // sag tarafi listeyi sola kopyala gibi.
{
	length=0;
	capacity=max(2,2*right.size());
	items=new int[capacity];
	
	for(int i=0;i<right.size();i++)
	{
		add(right.elementAt(i));
	}
}

bool ArrayList::isEmpty()const // liste bos mu
{
	return length==0;
}

int ArrayList::size()const // listenin size ını dödürüyor. 
{
	return length;
}

const int ArrayList::elementAt(int index) // verilen indexteki elemanı donduruyor.
{
	if(index<0 || index >=length) throw "index out of range";
	
	return items[index];
}
void ArrayList::insert(int index,const int item) // verilen indexe eleman ekleme
{
	if(index<0 || index >length) throw "index out of range";
	
	if(length==capacity)
	{
		reserve(2*capacity);
	}
	
	for(int i=length-1;i>=index;i--)
	{
		items[i+1]=items[i];
	}
	
	items[index]=item;
	length++;
	
}
void ArrayList::add(const int item) // listenin sonuna eleman ekleme
{
	insert(length,item); // insert fonksiyonuna index olarak genişlk verilirse
}						 // listenin sonuna ekleme yapar.


const int ArrayList::first() // listenin ilk elemanını getirir.
{
	if(isEmpty()) throw "List is empty";
	return items[0];
}
const int ArrayList::last() // listenin son elemanini getir.
{
	if(isEmpty()) throw "List is empty";
	return items[length-1];
}
void ArrayList::removeAt(int index) // verilen indexteki elemani sil.
{
	if(index<0 || index>=length) throw "index out of range";
	for(int i=index+1;i<length;i++)
	{
		items[i-1]=items[i];
	}
	
	length--;
}

void ArrayList::clear() // listeyi temizle(genisligi sifir yap)
{
	length=0;
}

ArrayList::~ArrayList() // yikici 
{
	delete [] items;
	
}
