// not working 
#include<iostream>
#include<cstdlib>
using namespace std;
struct node
{
	int a[];
	int k[];
};
void read(int arr[],int n)
{
	struct node m;
	int c=0;
	int l=1;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<l;j++)
		{
			if(m.a[j]==arr[i]){
			m.k[j]++;
			cout<<l;
			}
			else 
			{
			m.a[j]=arr[i];
			m.k[j]++;
			l++;
		}
		}
	}
	for(int i=0;i<l;i++)
	{
		if(m.k[i]>n/2){
		cout<<"yes  "<<m.a[i];
		c=1;
		}
	}
	if(c=0)
	cout<<"no majority element";
}
int main() 
{ 
	int arr[] = {10, 5, 5, 1, 5,5,8, 5,0}; 
	int n = sizeof(arr)/sizeof(arr[0]); 
	read(arr,n);
	return 0; 
}
