#include<bits/stdc++.h>
using namespace std;
int SearchSortedRotatedArray(int arr[],int n,int x)
{
	int start=0;
	int end=n-1;
	while(start<=end)
	{
		int mid=(start+end)/2;
		if(arr[mid]==x)
			return mid;
		if(arr[start]<arr[mid])    //left half sorted
		{
			if(x>=arr[start] and x<arr[mid])     //element lies in left half or not
			{
				end=mid-1;
			}
			else
			start=mid+1;
			
		}
		else                                  //right half sorted
		{
			if(x>arr[mid] and x<=arr[end])    //element lies in right half or not
			start=mid+1;
			else
			end=mid-1;
		}
	}
	return -1;
}
int main()
{
	int arr[]={10,20,40,60,5,8};
	int size=sizeof(arr)/sizeof(arr[0]);
	int ele=40;
	cout<<SearchSortedRotatedArray(arr,size,ele);
}
