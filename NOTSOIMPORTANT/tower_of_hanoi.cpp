#include <iostream>
using namespace std;

void towerOfHanoi(int n,char rod1,char rod3,char rod2){
	if(n == 1){
		cout << "Move disk 1 from rod " << rod1 << " to rod " << rod3 << endl;
		return;
	}
	towerOfHanoi(n-1,rod1,rod2,rod3);
	cout << "Move disk " << n << " from rod " <<  rod1 << " to rod " << rod3 << endl;
	towerOfHanoi(n-1, rod2 , rod3, rod1);
}
int main(){
	int n;
	cin>>n;
	towerOfHanoi(3,'A','C','B');
}

	
