#include<bits/stdc++.h>
using namespace std;
int PairGivenSum(int arr[],int n,int k)
{
	int low=0;
	int high=n-1;
	while(low<=high)
	{
		if(arr[low]+arr[high]==k)
			return 1;
		else if(arr[low]+arr[high]>k)
			high--;
		else
			low++;
	}
	return -1;
}
int main()
{
	int arr[]={3,8,13,18};
	int size=sizeof(arr)/sizeof(arr[0]);
	int s=14;
	cout<<PairGivenSum(arr,size,s);
}
