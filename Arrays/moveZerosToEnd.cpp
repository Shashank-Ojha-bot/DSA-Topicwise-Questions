#include<bits/stdc++.h>
using namespace std;
int* moveZerosEnd(int arr[],int size)
{
	int count=0;
	for(int i=0;i<size;i++)
	{
		if(arr[i]!=0)
		{
			arr[i]=arr[i]+arr[count];				
			arr[count]=arr[i]-arr[count];
			arr[i]=arr[i]-arr[count];
			count++;
		}
	}
	return arr;
}
int main()
{
	int arr[]={10,20,0,30,0,40,0,0};
	int size=sizeof(arr)/sizeof(arr[0]);
	moveZerosEnd(arr,size);
	for(int i=0;i<size;i++)
	cout<<arr[i]<<endl;
}
