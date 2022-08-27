/** 
* @file AVL.cpp
* @description  Avl ağacında elemanları ağaca yerleştirme ve elemanların içindeki diziyi düğümün hareketine göre revize etme.
* @course Dersi 2022 Yaz Okulu 1A 
* @assignment Odev 2
* @date 18.08.2022
* @author Bahadır Beşir Kestane G191210088 bahadir.kestane@ogr.sakarya.edu.tr 
*/

#include "AVL.hpp"


// Düğüm yapısının Kurucu metodu.
Node::Node(const int vr,ArrayList* array,Node *sl=NULL,Node *sg=NULL){
	
	sayilar=new ArrayList(); // ArrayList oluşturuluyor.
	
	for(int i=0;i<array->size();i++) // Prametre olarak gönderilen ArrayListin elemanları düğümün dizisine aktarılıyor.
	{
		sayilar->add(array->elementAt(i));
	}
	
	
	data = vr;
	left = sl;
	right = sg;
	
	height=0;
	
}


// Ağaca düğüm ekleme fonksiyonu.
Node* AVL::SearchAndAdd(Node *subNode,const int item,ArrayList * array){
	
	if(subNode == NULL) subNode = new Node (item,array); // Yeni düğüm oluşturma
	else if(item < subNode->data){ // gelen sayı ağaçta yerini alması için karşılaştırma yapılıyor.
		
		subNode->left = SearchAndAdd(subNode->left,item,array);
			
		if(Height(subNode->left) == Height(subNode->right)+2){ // Eklenen düğüm ağaç düzenini bosması durumunda 
			if(item < subNode->left->data)					   // değiş tokuş işlemleri yapılıyor.
			{		
				subNode = SwapWithLeftChild(subNode);          // gelen sayı küçükse sola aktarılıyor.(genel anlatım olarak)
			}
			else{
				
				subNode->left = SwapWithRightChild(subNode->left); // gelen sayı büyükse sağa aktarılıyor.
				
				subNode = SwapWithLeftChild(subNode);              // dengeleme durumunda yukarı çıkma işleminde sol çocuk
			}													   // yer degistiriyor.
		}
	}
	else if(item > subNode->data){                                 // Aynı işlemler sayının büyük olma durumu içinde yapılıyor.
		subNode->right = SearchAndAdd(subNode->right,item,array);
			
		if(Height(subNode->right) == Height(subNode->left)+2){
			if(item > subNode->right->data)
			{
				
				subNode = SwapWithRightChild(subNode);
			}
			else{
				
				subNode->right = SwapWithLeftChild(subNode->right);
				subNode = SwapWithRightChild(subNode);
			}
		}
	}
	else;
	
	subNode->height = Height(subNode);
	
	return subNode;
}


Node* AVL::SwapWithLeftChild(Node *subNode){  // sol düğümle yer değiştirme işlemi.
	
	Node *tmp = subNode->left;
	subNode->left = tmp->right;
	tmp->right = subNode;
	
	subNode->height = Height(subNode);
	tmp->height = 1+max(Height(tmp->left),subNode->height);
	

	down(subNode); // Aşşağı inen düğümler için çalışan fonksiyon.
	
	if(!tmp->sayilar->isEmpty()) // düğüm yukarı çıkarken sağ çocukları aşşağı indiğinde çalışır.
	{
		cout<<tmp->data<<" nolu dugum yukari ciktigi icin dizideki en kucuk ";
		cout<<tmp->sayilar->first()<<" sayisi silinmistir."<<endl;
		tmp->sayilar->removeAt(0);
	}
	
	
	up(tmp->left); // Yukarı çikan düğümler için çalışan fonksiyon.
	
	return tmp;
}
Node* AVL::SwapWithRightChild(Node *subNode){ // sağ çocukla yer değiştirme işlemi
	
	Node *tmp = subNode->right;
	subNode->right = tmp->left;
	tmp->left = subNode;
	
	subNode->height = Height(subNode);
	tmp->height = 1+max(Height(tmp->right),subNode->height);
	
	
	down(subNode);
	if(!tmp->sayilar->isEmpty()) // düğüm yukarı çıkarken sağ çocukları aşşağı indiğinde çalışır.
	{
		cout<<tmp->data<<" nolu dugum yukari ciktigi icin dizideki en kucuk ";
		cout<<tmp->sayilar->first()<<" sayisi silinmistir."<<endl;
		tmp->sayilar->removeAt(0);
	}
	up(tmp->right);
	
	return tmp;
}
bool AVL::DeleteNode(Node *&subNode){ // parametre olarak gönderilen düğümü silen fonksiyon.
	Node *delNode = subNode;
	
	if(subNode->right == NULL) subNode = subNode->left;
	else if(subNode->left == NULL) subNode = subNode->right;
	else{
		delNode = subNode->left;
		Node *parentNode = subNode;
		while(delNode->right != NULL){
			parentNode = delNode;
			delNode = delNode->right;
		}
		subNode->data = delNode->data;
		if(parentNode == subNode) subNode->left = delNode->left;
		else parentNode->right = delNode->left;
	}
	
    delete delNode->sayilar;
	delete delNode;
	return true;
}
void AVL::inorder(Node*subNode){ // inorder okuma fonksiyonu.
	if(subNode != NULL){
		inorder(subNode->left);
		cout<<subNode->data<<": ";
		
		for(int i=0;i<subNode->sayilar->size();i++)
		{
			cout<<subNode->sayilar->elementAt(i)<<" ";
		}
		cout<<endl;
		inorder(subNode->right);
	}
}
void AVL::preorder(Node *subNode){ // Preorder okuma fonksiyonu.
	if(subNode != NULL){
		
		cout<<subNode->data<<": ";
		
		for(int i=0;i<subNode->sayilar->size();i++)
		{
			cout<<subNode->sayilar->elementAt(i)<<" ";
		}
		cout<<endl;
		preorder(subNode->left);
		preorder(subNode->right);
	}
	
}
void AVL::postorder(Node *subNode){ // Postorder okuma fonksiyonu.
	if(subNode != NULL){
		postorder(subNode->left);
		postorder(subNode->right);
		cout<<subNode->data<<": ";
		
		for(int i=0;i<subNode->sayilar->size();i++)
		{
			cout<<subNode->sayilar->elementAt(i)<<" ";
		}
		cout<<endl;
	}
}

void AVL::down(Node* subNode){ // Düğümün aşşağı inmesi durumunda çalışan fonksiyon.
	
	if(subNode != NULL)
	{
		
		if(!subNode->sayilar->isEmpty())
		{
			cout<<subNode->data<<" nolu dugum assagi indigi icin  dizideki en buyuk ";
			cout<<subNode->sayilar->last()<<" sayisi silinmistir."<<endl;
			
			subNode->sayilar->removeAt(subNode->sayilar->size()-1);
		}
		
		
		down(subNode->left);  // Rekursif çağırımlar.
		down(subNode->right);
		
		
	}
	
}

void AVL::up(Node* subNode){ // Düğümün yukarı çıkması durumunda çalışan fonksiyon.
	
	if(subNode != NULL)
	{
		
		if(!subNode->sayilar->isEmpty())
		{
			cout<<subNode->data<<" nolu dugum yukari ciktigi icin dizideki en kucuk ";
			cout<<subNode->sayilar->first()<<" sayisi silinmistir."<<endl;
			subNode->sayilar->removeAt(0);
		}
		
		up(subNode->left); // Rekursif çağırımlar.
		up(subNode->right);
		
		
	}
}



int AVL::Height(Node *subNode){ // Ağacın yüksekliğini döndüren fonksiyon.
	if(subNode == NULL) return -1;
	return 1+max(Height(subNode->left),Height(subNode->right));
}
void AVL::PrintLevel(Node *subNode,int level){ // Verilen indexe göre ağacın ilgili sırasını yazan fonksiyon.
	if(subNode == NULL) return;
	if(level == 0) cout<<subNode->data<<" ";
	else{
		PrintLevel(subNode->left,level-1);
		PrintLevel(subNode->right,level-1);
	}
}
bool AVL::Search(Node *subNode,const int item){ // arama fonksiyonu.
	if(subNode == NULL) return false;
	if(subNode->data == item) return true;
	if(item < subNode->data) return Search(subNode->left,item);
	else return Search(subNode->right,item);
}

AVL::AVL(){ // AVL ağacının kurucu metodu.
	root = NULL;
	
}
bool AVL::isEmpty()const{ // Ağacın boş olma durumunun kontrolü.
	return root == NULL;
}

// Private alandaki fonksiyonlara erişim sağlayan fonksiyonlar.
void AVL::Add(const int item,ArrayList * array){
	
	root = SearchAndAdd(root,item,array);
}



void AVL::inorder(){
	inorder(root);
}
void AVL::preorder(){
	preorder(root);
}
void AVL::postorder(){
	postorder(root);
}

void AVL::levelorder(){
	int h = Height();
	for(int level=0;level<=h;level++){
		PrintLevel(root,level);
	}
}
int AVL::Height(){
	return Height(root);
}
bool AVL::Search(const int item){
	return Search(root,item);
}
void AVL::Clear(){
	while(!isEmpty()) DeleteNode(root);
}

AVL::~AVL(){
	Clear();
	
	
}






