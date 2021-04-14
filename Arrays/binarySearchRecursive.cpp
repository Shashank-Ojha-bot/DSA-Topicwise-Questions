#include<bits/stdc++.h>
using namespace std;
int binarySearchR(int arr[],int start,int end,int x)
{
	if(start<=end)
	{
		int mid=(start+end)/2;
		if(arr[mid]==x)
			return mid;
		else if(arr[mid]>x)
			return binarySearchR(arr,start,mid-1,x);
		else
			return binarySearchR(arr,mid+1,end,x);
		
	}
	return -1;
}
int main()
{
	int arr[]={2,3,4,5,6,7,9};
	int size =sizeof(arr)/sizeof(arr[0]);
	int ele=9;
	cout<<binarySearchR(arr,0,size-1,ele);
}
