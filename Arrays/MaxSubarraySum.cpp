#include<bits/stdc++.h>
using namespace std;
int MaxSubarraySum(int arr[],int n)
{
	int maxSum=INT_MIN;
	for(int i=0;i<n;i++)
	{int sum=0;
		for(int j=i;j<n;j++)
		{
			sum=sum+arr[j];
			maxSum=max(maxSum,sum);
		}
	}
	return maxSum;
}
int main()
{
	int arr[]={-6,-1,-8};
	int size=sizeof(arr)/sizeof(arr[0]);
	cout<<MaxSubarraySum(arr,size);
}
