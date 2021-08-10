#include <bits/stdc++.h>
using namespace std;

void swap(int *a, int *b){
	int *temp = a;
	a=b;
	b=temp;
}

void bubbleSort(int arr[], int n){
	if(n==1) return;
	for(int i=0;i<n; i++){
		for(int j=i+1; j<n; j++){
			if(arr[i]>arr[j]){
				swap(arr[i], arr[j]);
			}
		}
	}
}
void printArray(int arr[], int n){
	int i;
	for(i=0; i<n; i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

int main()
{
	std::cout << "Hello, World" << std::endl;
	int arr[]={12,10,23,290,33,45,4,17,28};
	int n=9;
	printArray(arr, n);
	bubbleSort(arr,n);
	printArray(arr,n);
	
	return 0;
}
