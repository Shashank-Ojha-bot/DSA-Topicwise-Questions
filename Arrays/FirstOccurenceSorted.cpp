#include<bits/stdc++.h>
using namespace std;
int FirstOccurence(int arr[],int start,int end,int x)
{
	if(start<=end)
	{
		int mid=(start+end)/2;
		if(arr[mid]==x)
		{
			if(arr[mid]==0)
			return mid;
			else
			{
				if(arr[mid]==arr[mid-1])
				{
				return FirstOccurence(arr,start,mid-1,x);
				}
				else
				return mid;
			}
		}
		else if(arr[mid]>x)
		return FirstOccurence(arr,start,mid-1,x);
		else
		return FirstOccurence(arr,mid+1,end,x);
	}
	return -1;
}
int main()
{
	int arr[]={5,5,5};
	int size=sizeof(arr)/sizeof(arr[0]);
	int ele=5;
	cout<<FirstOccurence(arr,0,size-1,ele);
}
