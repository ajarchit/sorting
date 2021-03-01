#include<iostream>
using namespace std; 

void swap(int* a, int* b) 
{ 
	int t = *a; 
	*a = *b; 
	*b = t; 
} 
int partition (int arr[],int l,int h) 
{ 
	int pivot=arr[h]; 
	int i=(l-1); 

	for (int j=l;j<h;j++) 
	{ 
		if (arr[j] < pivot) 
		{ 
			i++; 
			swap(&arr[j],&arr[i]); 
		} 
	} 
	swap(&arr[i+1],&arr[h]); 
	return (i+1); 
} 

void quickSort(int arr[],int l,int h) 
{ 
	if (l<h) 
	{ 
		int pivot = partition(arr,l,h); 
		quickSort(arr,l,pivot-1); 
		quickSort(arr,pivot+1,h); 
	} 
} 

void print(int arr[], int n) 
{  
	for (int i=0;i<n;i++) 
		cout <<arr[i]<< " "; 
	cout << endl; 
} 
int main() 
{ 
	int arr[] = {10, 5, 8, 1, 6, 7}; 
	int n = 6; 
	quickSort(arr,0,n-1); 
	cout << "Sorted array: \n"; 
	print(arr, n); 
	return 0; 
} 


