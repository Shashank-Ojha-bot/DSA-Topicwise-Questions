#include<bits/stdc++.h>
using namespace std;
int MaxCons(int arr[],int n,int k)
{
	int Sum=0;
	int maxSum=INT_MIN;
	for(int i=0;i<k;i++)
	{
		Sum+=arr[i];
	}
	for(int i=k;i<n;i++)
	{
		maxSum=max(Sum,maxSum);
		Sum=Sum+arr[i]-arr[i-k];
	}
	return maxSum;
}
int main()
{
	int arr[]={5,-10,6,90,3};
	int n=sizeof(arr)/sizeof(arr[0]);
	int k=2;
	cout<<MaxCons(arr,n,k);
}
