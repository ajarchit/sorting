#include<iostream>
#include<stdlib.h>
using namespace std; 

void swap(int* a, int* b) 
{ 
	int t = *a; 
	*a = *b; 
	*b = t; 
} 
int random(int arr[],int l,int r)
{
	int n=r-l+1;
	int temp=rand()%n;
	swap(&arr[l+temp],&arr[n]);
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
void med(int arr[],int n)
{
	if(n%2==1)
		cout<<arr[n/2];
	else
		cout<< (arr[n/2]+arr[(n-1)/2])/2.0;
	cout<<endl;
}

/*void print(int arr[], int n) 
{  
	for (int i=0;i<n;i++) 
		cout <<arr[i]<< " "; 
	cout << endl; 
} */
int main() 
{ 
	int arr[] = {2, 5, 8, 1, 6, 7,3,4}; 
	int n = sizeof(arr)/sizeof(arr[0]); 
	quickSort(arr,0,n-1); 
	med(arr,n); 
	return 0; 
} 


