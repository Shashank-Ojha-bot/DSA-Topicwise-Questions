#include<bits/stdc++.h>
using namespace std;
int maxSubSum(int arr[],int n)
{
	int maxSum=arr[0];
	int sum=0;
	for(int i=0;i<n;i++)
	{
		sum+=arr[i];
		maxSum=max(sum,maxSum);
		if(sum<0)
		sum=0;
	}
	return maxSum;
}
int main()
{
	int arr[]={-1,2,-3,5,-6,-9,3};
	int size=sizeof(arr)/sizeof(arr[0]);
	cout<<maxSubSum(arr,size);
}
