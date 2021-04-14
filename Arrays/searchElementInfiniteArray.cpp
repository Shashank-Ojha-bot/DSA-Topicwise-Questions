#include<bits/stdc++.h>
using namespace std;
int BinarySearch(int arr[],int start,int end,int x)
{
	while(start<=end)
	{
		int mid=(start+end)/2;
		if(arr[mid]==x)
		return mid;
		else if(arr[mid]>x)
		end=mid-1;
		else
		start=mid+1;
	}
	return -1;
}
int searchInfiniteArray(int arr[],int n,int x)
{
	if(arr[0]==x)
	return 0;
	int i=1;
	while(arr[i]<x)
		i=i*2;
	if(arr[i]==x)
	return i;
	else
	return BinarySearch(arr,(i/2)+1,i-1,x);
}
int main()
{
	int arr[]={1,10,15,20,60,100,200,500,1000,2000};
	int size=sizeof(arr)/sizeof(arr[0]);
	int ele=200;
	cout<<searchInfiniteArray(arr,size,ele);
}
