#include <iostream>
using namespace std;

class Node{
	public:
		int data;
		Node* next;
		Node* prev;
};

void trav(Node* k){
	Node* new_node;
	new_node = new Node();
	new_node = k;
	while(new_node!=NULL){
		cout << new_node->data << endl;
		new_node = new_node->next;
	}
}
void insert(Node* k,int d){
	Node* new_node;
	new_node = new Node();
	new_node->data = d;
	new_node->next = k->next;
	new_node->prev = k->prev;	
	k->next = new_node;
}
void del(Node* prev,Node* k){
	prev->next = k->next;
	k->prev = prev;
	k->next = NULL;
	k->prev = NULL;

}	
	
int main(){
	Node* first;
	Node* second;
	Node* third;
	first = new Node();
	second = new Node();
	third = new Node();	
	first->data = 1;
	first->next = second;
	first->prev = NULL;
	second->data = 2;
	second->next = third;
	second->prev = first;
	third->data = 3;
	third->next = NULL;
	third->prev = second;
	cout << "List contents:" << endl;
	trav(first);
	cout << "Insertion after second:" << endl;
	insert(second, 6);
	trav(first);
	cout << "After deletion at second:" << endl;
	del(first,second);
	trav(first);
}
