#include<bits/stdc++.h>
using namespace std;
int MaxConsSum(int arr[],int n,int k)
{
	int sum=0;
	int currSum=0;
	for(int i=0;i<k;i++)
	{
		currSum+=arr[i];
	}
	int maxSum=currSum;
	for(int i=k;i<n;i++)
	{
		currSum=currSum+arr[i]-arr[i-k];
		if(currSum>maxSum)
		maxSum=currSum;
	}
	return maxSum;
}
int main()
{
	int arr[]={1,8,30,-5,20,7};
	int size=sizeof(arr)/sizeof(arr[0]);
	int k=3;
	cout<<MaxConsSum(arr,size,k);
}
