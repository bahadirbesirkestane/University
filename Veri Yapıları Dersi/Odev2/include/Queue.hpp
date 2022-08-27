#ifndef QUEUE_HPP
#define QUEUE_HPP

#include<iostream>

using namespace std;


struct NodeQ // Kuyruk için düğüm yapısı
{
	int item;
	NodeQ *next;
	
	NodeQ(int item,NodeQ *next);
	
};




class Queue // Kuyruk sınıfı.
{
	private:
		NodeQ *front;
		NodeQ *back;
		int length;
		
	
	public:
		Queue(); // Kuyruk kurucu metodu.
		
		void clear(); // Kuyruğu temzileyen fonksiyon.
		
		int count()const; // Kuyruğun uzunluğunu döndürür.
		
		bool isEmpty()const; // Kuyruğun boş olması durumunda true döndürür.
		
		const int peek(); // Front un item ını verir.
		
		void enqueue(const int item); // Kuyruğa sayı eklemesi yapan fonksiyon.
		
		void dequeue(); // Kuyruktan eleman silen fonksyon.
		
		~Queue();
		
		
	
};



#endif