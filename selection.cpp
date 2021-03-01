#include<iostream>
using namespace std; 
void swap(int* a,int* b) 
{ 
	int t =*a; 
	*a=*b; 
	*b=t; 
} 
void selection(int arr[],int n) 
{ 
	int i,j,min; 
	for (i =0;i<n-1;i++) 
	{ 
		min=i; 
		for (j=i+1;j<n;j++) 
		if (arr[j]<arr[min]) 
			min=j; 
		swap(&arr[min], &arr[i]); 
	} 
} 
void print(int arr[],int m) 
{ 
	int i; 
	for (i=0;i<m;i++) 
		cout <<arr[i]<<"  "; 
	cout <<endl; 
} 
int main() 
{ 
	int arr[]={10,5, 8, 1, 6, 7};  
	int n=6;
	selection(arr, n); 
	cout <<"Sorted array: "; 
	print(arr, n); 
	return 0; 
} 
