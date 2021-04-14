#include<bits/stdc++.h>
using namespace std;
int binarySearch(int arr[],int n,int k)
{
	int start=0;
	int end=n-1;
	int mid;
	while(start<=end)
	{
		mid=(start+end)/2;
		if(arr[mid]==k)
			return mid;
		else if(k<arr[mid])
		{
			end=mid-1;
		}
		else
		start=mid+1;
	}
	return -1;
}
int main()
{
	int arr[]={10,10};
	int size=sizeof(arr)/sizeof(arr[0]);
	int ele=10;
	cout<<binarySearch(arr,size,ele);
}
