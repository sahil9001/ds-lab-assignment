#include <iostream>
using namespace std;

//Defining queue class
class Queue{
	public:
		int front,rear,size,capacity;
		int *array;
};
//Queue function to initialize a queue of a certain capacity
Queue* createQueue(int capacity){
	Queue* queue = new Queue();
	queue->capacity = capacity;
	//Queue front index
	queue->front = queue->size = 0;
	//Queue rear index
	queue->rear = capacity - 1;
	//Queue array of size 'capacity'
	queue->array = new int[(queue->capacity*sizeof(int))];
	return queue;
}
//Checks if the queue is full
bool isFull(Queue* queue){
	return (queue->size == queue->capacity); 
}
//Checks if the queue is empty
bool isEmpty(Queue* queue){
	return (queue->size == 0);
}
//Inserts an element in queue
void enqueue(Queue* queue, int item){
	if(isFull(queue)) return;
	queue->rear = (queue->rear + 1) % queue->capacity;
	queue->array[queue->rear] = item;
	queue->size = queue->size + 1;
	cout << item << " enqueued to queue." << endl;
}
//Dequeues an element from the queue
int dequeue(Queue* queue){
	if(isEmpty(queue))
		return -1;
	int item = queue->array[queue->front];
	queue->front = (queue->front + 1) % queue->capacity;
	queue->size = queue->size -1;
	return item;
}

//Displays queue contents
void show(Queue* queue){
	int high = queue->rear;
	int low = queue->front;
	for(int i=low;i<high+1;i++){
		cout << queue->array[i] << " ";
	}
	cout << endl;

}
int main(){
	Queue* queue = createQueue(100);
	enqueue(queue,1);
	enqueue(queue,2);
	enqueue(queue,3);
	enqueue(queue,4);
	show(queue);
}
