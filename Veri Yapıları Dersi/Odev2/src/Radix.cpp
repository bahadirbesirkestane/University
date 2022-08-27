/** 
* @file Radix.cpp
* @description  Verilen diziyi küçükten büyüğe sıralayan algoritma.
* @course Dersi 2022 Yaz Okulu 1A 
* @assignment Odev 2
* @date 18.08.2022
* @author Bahadır Beşir Kestane G191210088 bahadir.kestane@ogr.sakarya.edu.tr 
*/
#include "Radix.hpp"

int Radix::MaxStepNumber(){ // en yüksek basamak sayısını döndüren fonksiyon.
	int max=0;
	for(int i=0;i<length;i++){
		if(StepCount(numbers[i])>max) max = StepCount(numbers[i]);
	}
	return max;
}
int Radix::StepCount(int number){ // verilen sayının basamak sayısını döndüren fonksiyon.
	number = abs(number);
	int basamak=0;
	while(number>0){
		basamak++;
		number /= 10;
	}
	return basamak;
}
Radix::Radix(int *numbers, int length){ // Radix sınıfı kurucu metodu.
	this->numbers = new int[length];
	this->length = length;
	for(int i=0;i<length;i++){ this->numbers[i] = numbers[i]; }
	queues = new Queue*[10];
	for(int j=0;j<10;j++){ queues[j] = new Queue(); }
	maxStep = MaxStepNumber();
}
int* Radix::QueueCurrentLengths(){ // sıralama yapacak dizi için 10 adet dizi tanımlıyor.
	int *lengths = new int[10];
	for(int i=0;i<10;i++){
		lengths[i] = queues[i]->count();
	}
	return lengths;
}
int* Radix::Sort(){ // Küçükten büyüğe sıralama yapan fonksiyon.
	int numberIndex=0;
	// read from array once and add to queues
	for(;numberIndex<length;numberIndex++){
		int stepValue = numbers[numberIndex]%10;
		int num = numbers[numberIndex];
		queues[stepValue]->enqueue(num);
	}
		
	//i starting from 1 because of first digit processed
	for(int i=1;i<maxStep;i++){
		//get the current length in all queues
		int *qlengths = QueueCurrentLengths();
		for(int index=0;index<10;index++){
			int len=qlengths[index];
			for(;len>0;len--){
				int number = queues[index]->peek();
				queues[index]->dequeue();
				int stepValue = (number/(int)pow(10,i))%10;	
				queues[stepValue]->enqueue(number);				
			}
		}
		delete [] qlengths;
	}
	int* ordered = new int[length];
	numberIndex=0;
	for(int index=0;index<10;index++){
		while(!queues[index]->isEmpty()){
			int number = queues[index]->peek();
			ordered[numberIndex++] = number;
			queues[index]->dequeue();
		}
	}
		
	return ordered;
}
Radix::~Radix(){	 // Radix sınıfı yıkıcı metodu.
	delete [] numbers;
	for(int i=0;i<10;i++) delete queues[i];
	delete [] queues;
}