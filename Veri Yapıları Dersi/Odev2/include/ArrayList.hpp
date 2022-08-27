#ifndef ARRAYLIST_HPP
#define ARRAYLIST_HPP
#include <iostream>

using namespace std;

class ArrayList
{
	private:
		int *items;
		int length;
		int capacity;
		
		void reserve(int) ;             // private alanda dizi tasması olduğunda eleman eklemek icin dizinin kapasitesini 
		
		
	public:
		ArrayList();
		
		ArrayList( ArrayList &right); // sag tarafi listeyi sola kopyala gibi.
		
		bool isEmpty()const; // liste bos mu
		
		int size()const; // listenin size ını dödürüyor. 
		
		const int elementAt(int index); // verilen indexteki elemanı donduruyor.
		
		void insert(int index,const int item); // verilen indexe eleman ekleme
		 
		void add(const int item); // listenin sonuna eleman ekleme.
		
		const int first(); // Listenin ilk elemanını döndürüyor.
		
		const int last(); // Listenin son elemanını dödürüyor.
		
		void removeAt(int index);  // Listenin verilen indexteki elemanını siliyor.
	
		void clear(); // listeyi temizle(genisligi sifir yap)
	
		~ArrayList(); // yikici 
		
};

#endif



