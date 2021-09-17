#include<bits/stdc++.h>
using namespace std;
void RotateArray(int arr[],int size,int pos)
{
	int i=0;
	int arr1[size];
	int count=pos;
	while(pos)
	{
		arr1[i]=arr[size-pos];
		i++;
		pos--;
	}
	int s=size-count;
	for(int i=0;i<s;i++)
	{
	arr1[count]=arr[i];
	count++;
	}
	
	for(int i=0;i<size;i++)
	cout<<arr1[i]<<" ";
}
int main()
{
	int arr[]={1,2,3,4,5,6,7};
	int n=sizeof(arr)/sizeof(arr[0]);
	RotateArray(arr,n,2);
}
