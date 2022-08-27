/** 
* @file Queue.cpp
* @description  Siralama algoritması için kuyruk sınıfı.
* @course Dersi 2022 Yaz Okulu 1A 
* @assignment Odev 2
* @date 18.08.2022
* @author Bahadır Beşir Kestane G191210088 bahadir.kestane@ogr.sakarya.edu.tr 
*/

#include "Queue.hpp"

NodeQ::NodeQ(int item,NodeQ *next=NULL) // Kuyruk düğümü kurucu fomkisyon.
{
	this->item=item;
	this->next=next;
}

Queue::Queue() // Kuyruk sınıfı kurucu fomksiyonu.
{
	front=back=NULL;
	length=0;
}
void Queue::clear() //Kuyruğu temizler.
{
	while(!isEmpty()) dequeue();
		
}
int Queue::count()const // Kuyruğun uzunluğunu döndürür.
{
	return length;
}
bool Queue::isEmpty()const // Kuyruğun boş olması durumunda true döndürür.
{
	return length==0;
}
const int Queue::peek() // Front un item ını verir.
{
	if(isEmpty()) throw "Queue is empty";
	
	return front->item;
}
void Queue::enqueue(const int item) // Kuyruğa eleman eklemesi yapan fonksiyon.
{
	NodeQ *last=new NodeQ (item);
	if(isEmpty()) front=back=last;
	else
	{
		back->next=last;
		back=last;
	}
	length++;
		
}
void Queue::dequeue() // Kuyruktan eleman silen fonksiyon. 
{
	if(isEmpty()) throw "Queue is empty";
	NodeQ *tmp=front;
	front=front->next;
	delete tmp;
	length--;
}
Queue::~Queue() // Kuyruk sınıfı yıkıcı fonksiyon.
{
	clear();
	
}