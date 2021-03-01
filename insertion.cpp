#include<iostream>
using namespace std;
void insertionSort(int arr[], int n) 
{ 
	int i,temp,j; 
	for (i=1;i<n;i++)
	{ 
		temp =arr[i]; 
		j=i-1; 
		while(j>=0&&arr[j]>temp)
		{ 
			arr[j+1]=arr[j]; 
			j=j-1; 
		} 
		arr[j+1] =temp; 
	} 
} 
void print(int arr[], int n) 
{ 
	int i; 
	for (i =0;i<n;i++) 
		cout<<arr[i]<<" "; 
	cout <<endl;
} 
int main() 
{ 
	int arr[]={10, 5, 8, 1, 6, 7};  
	int n=6;
	insertionSort(arr, n); 
	print(arr, n); 
	return 0; 
} 

