#include<iostream>
#include<cstdlib>
using namespace std;
void swap(int *a,int *b)
{
	int t= *a; 
	*a=*b; 
	*b=t; 
}
int random(int arr[],int l,int r)
{
	int n=r-l+1;
	int temp=rand()%n;
	swap(&arr[l+temp],&arr[n]);
}
int partition(int arr[],int l,int h) 
{ 
	int pivot=arr[h]; 
	int i=l-1; 

	for (int j=l;j<h;j++) 
	{ 
		if (arr[j]<pivot) 
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
void majority(int arr[],int n)
{
	int count=0;
	for(int i=0;i<n-1;i++ )
	{
		if(arr[i]==arr[i+1])
		{	
		count+=1;
		if(count>(n/2)-1)
		{
			cout<<"yes  "<<arr[i];
			break;
		}
		}
		else
		{
			count=0;
		}
	}
	if(count<n/2)
	cout<<"no majority element";
 }
 void print(int arr[], int n) 
{  
	for (int i=0;i<n;i++) 
		cout <<arr[i]<< " "; 
	cout << endl; 
}  
int main() 
{ 
	int arr[] = {10, 5, 5, 1, 5,5,8, 5,0}; 
	int n = sizeof(arr)/sizeof(arr[0]); 
	quickSort(arr,0,n-1); 
	cout << "Sorted array: \n"; 
	print(arr,n);
	majority(arr,n);
	return 0; 
}
