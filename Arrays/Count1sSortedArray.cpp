#include<bits/stdc++.h>
using namespace std;
int countOnesSortedArray(int arr[],int n,int x)
{
	int start=0;
	int end=n-1;
	int mid;
	while(start<=end)
	{
		mid=(start+end)/2;
//		cout<<"Mid"<<mid<<endl;
		if(arr[mid]==x)
		{
			if(mid==0 or arr[mid]!=arr[mid-1])
			{
				return mid;
			}
			else
			end=mid-1;
		}
		else if(arr[mid]>x)
		end=mid-1;
		else
		start=mid+1;
	}
	return -1;
}
int main()
{
	int arr[]={0,0,0,0};
	int size=sizeof(arr)/sizeof(arr[0]);
	int firstOccurence=countOnesSortedArray(arr,size,1);
//	cout<<firstOccurence<<endl;
	int count=firstOccurence!=-1?size-(firstOccurence):0;
	cout<<count;
	
}
