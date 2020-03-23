#include <iostream>
using namespace std;
#define MAXSIZE 10

class Stack{
	private:
		int top;
	public:
		int arr[MAXSIZE];
		//Initializes empty stack
		Stack(){
			top=-1;
		}
		//Pushes element 'x' on top
		bool push(int x);
		//Removes the top element from the stack
		int pop();
		//Checks if the stack is empty or not
		bool isEmpty();
		//Display stack contents
		void list();
};

bool Stack::push(int x){
		if(top+1 >= MAXSIZE){
			cout << "Stack Overflow" << endl;
			return false;
		}
		else{
			top++;
			arr[top] = x;
			return true;
		}
}
int Stack::pop(){
		if(top<0){
			cout << "Stack Underflow" << endl;
			return 0;
		}
		else{
			int x = arr[top--];
			return x;
		}
}
bool Stack::isEmpty(){
		return (top<0);
}
void Stack::list(){
		for(int i=0;i<=top;i++)
			cout << arr[i] << " ";
		cout << endl;
}
int main(){
	Stack s;
	s.push(1);
	s.push(2);
	s.push(3);
	s.push(4);
	s.pop();
	s.list();
}

