#include<iostream> 
using namespace std; 

void swap(int *x, int *y) 
{ 
	int temp=*x; 
	*x=*y; 
	*y=temp; 
} 
void bubble(int arr[], int n) 
{ 
	int i, j; 
	for (i = 0;i<n-1;i++){	 
	for (j = 0;j<n-i-1;j++){
		if (arr[j]>arr[j+1]) 
			swap(&arr[j], &arr[j+1]); 
		}
	}
} 
void print(int arr[], int m) 
{ 
	int i; 
	for (i = 0;i<m;i++) 
		cout << arr[i] << " "; 
	cout <<endl; 
} 
int main() 
{ 
	int arr[]={10, 5, 8, 1, 6, 7};  
	int n=6;
	bubble(arr,n); 
	cout<<"Sorted array: "; 
	print(arr, n); 
	return 0; 
} 
