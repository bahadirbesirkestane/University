#ifndef AVL_HPP
#define AVL_HPP

#include "ArrayList.hpp"
#include <iostream>

#include <cmath>
using namespace std;

// Düğüm
struct Node{
	//Düğümün verisi.
	int data; 
	
	//Düğümün verisinin dizisi için arrayList.
	ArrayList *sayilar;
	
	// Düğümün sol çocuğu ve sağ çocuğu.
	Node *left;
	Node *right;
	//Düğümün hangi yükseklikte olduğu bilgisini tutan değişken.
	int height;
	
	// Kurucu sınıf
	Node(const int vr,ArrayList* array,Node *sl,Node *sg);
};

//Ağaç sınıfı
class AVL{
	private:
		
		
		Node *root;
				
		Node* SearchAndAdd(Node *subNode,const int item,ArrayList * array);// Ağaca düğüm ekleme fonksiyonu.
				
		Node* SwapWithLeftChild(Node *subNode); // düğümu sol çocukla değiştirme fonksiyonu.
		
		Node* SwapWithRightChild(Node *subNode); // düğümu sağ çocukla değiştirme fonksiyonu.
			
		bool DeleteNode(Node *&subNode); // Düğüm silme fonksiyonu.
		
		void inorder(Node*subNode); // Ağacı inorder okumak için.
		
		void preorder(Node *subNode); // Ağacı preorder okumak için.
		
		void postorder(Node *subNode); // Ağacı postorder okumak için
		
		void down(Node*subNode); // Düğüm aşşağı indiğinde içindeki diziden en büyük elemanı silen fonksiyon.
		
		void up(Node*subNode); // Düğüm yukarı çıktığında içindeki diziden en küçük elemanı silen fonksiyon.
		
		int Height(Node *subNode); // Düğümun yüksekliğini döndüren fonksiyon.
		
		void PrintLevel(Node *subNode,int level); // verilen levele göre ağacı ekrana yazdırıyor.
		
		bool Search(Node *subNode,const int item); // Arama işlemi yapan fonksiyon.
		
	public:
		AVL(); // Ağaç sınıfı kurucu fonksiyonu.
		
		bool isEmpty()const; // Ağacın boş olma durumunu kontrol eden fonksiyon.
		
		
		// public alanda oluşturulan bu fonksiyonlar private alana erişim sağlıyor.
				
		void Add(const int item,ArrayList * array);
		
		void inorder();
		
		void preorder();
		
		void postorder();
				
		void levelorder();
		
		int Height();
		
		bool Search(const int item);
		
		void Clear(); // ağac temizleme fonksiyonu
					
		~AVL(); // Yıkıcı fonksiyon.
};

#endif