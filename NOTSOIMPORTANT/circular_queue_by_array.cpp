#include <iostream>
using namespace std;
#define SIZE 100
class Queue{
	private:
		int items[SIZE],front,rear;
	public:
		Queue(){
			front = rear = -1;
		}
		bool isFull(){
			if(front == 0 && rear == SIZE - 1) return true;
			if(front == rear + 1) return true;
			return false;
		}
		bool isEmpty(){
			if(front == -1) return true;
			else return false;
		}
		void enQueue(int element){
			if(isFull()) cout << "Queue is full!" << endl;
			else{
				if(front == -1) front = 0;
				rear = (rear + 1) % SIZE;
				items[rear] = element;
				cout << "Inserted " << element << endl;
			}
		}
		void deQueue(){
			if(isEmpty()) cout << "Queue is empty!" << endl;
			else{
				int element = items[front];
				if(front == rear){
					front = rear = -1;
				}
				else{
					front = (front + 1) % SIZE;
				}
			}
		}
		void display(){
			if(isEmpty()) cout << "Queue is empty!" << endl;
			else{
				for(int i=front;i<rear;i=(i+1)%SIZE){
					cout << items[i] << " ";
				}
				cout << endl;
			}
		}
};

int main(){
	Queue q;
	q.deQueue();
	q.enQueue(1);
	q.enQueue(2);
	q.enQueue(3);
	q.enQueue(4);
	q.display();
}
