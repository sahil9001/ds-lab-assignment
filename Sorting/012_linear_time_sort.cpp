#include <iostream>
using namespace std;

int main(){
	int n;
	cout << "Enter size of array: ";
	cin>>n;
	int arr[3]={0};
	for(int i=0;i<n;i++){
		int x;
		cin>>x;
		arr[x]++;
	}
	int arr1[n]={0};
	for(int i=0;i<arr[0];i++){
		arr1[i]=0;
	}
	for(int i=arr[0];i<arr[1]+arr[0];i++){
		arr1[i]=1;
	}
	for(int i=arr[1]+arr[0];i<arr[0]+arr[1]+arr[2];i++){
		arr1[i]=2;
	}
	for(int i=0;i<n;i++){
		cout << arr1[i] << " ";
	}
	cout << endl;
}
