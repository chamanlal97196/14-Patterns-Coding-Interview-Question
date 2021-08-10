#include <bits/stdc++.h>
using namespace std;

/*
       * 1. Selection sort is the simplest sorting algorithm. It finds the smallest element in the array and swaps it with the first position in the array. Then the second smallest and swaps it with the second position etc.
       * 2. Worst Case Time Complexity : O(n2)
       * 3. Best Case Time Complexity : O(n2)
       * 4. Average Time Complexity : O(n2)
       * 5. Space Complexity : O(1)
       * This makes it inefficient to operate on larger datasets
       * 
*/

void selectionSort(int arr[], int n){
	if(n==1) return;
	int min_index=0;
	for(int i=0; i<n; i++){
		min_index=i;
		for(int j=i+1; j<n; j++){
			if(arr[j]<arr[min_index]){
				min_index=j;
			}
		}
		swap(arr[i], arr[min_index]);
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
	// std::cout << "Hello, World" << std::endl;
	int arr[]={23,45,4,56,224,33,45,87,100};
	int n=9;
	printArray(arr,n);
	selectionSort(arr, n);
	printArray(arr, n);
	return 0;
}
