#include<bits/stdc++.h>
using namespace std;
int MaxSubSum(int arr[],int n)
{
	int res=arr[0];
	int currentMax=0;
	for(int i=0;i<n;i++)
	{
		currentMax=max(arr[i],currentMax+arr[i]);
		if(currentMax>res)
		res=currentMax;
	}
	return res;
}
int main()
{
	int arr[]={5,-2,3,4};
	int size=sizeof(arr)/sizeof(arr[0]);
	int maxNormal=MaxSubSum(arr,size);
	if(maxNormal<0)
	{
	cout<<maxNormal;
	return 0;}
	int arrSum=0;
	for(int i=0;i<size;i++)
	{
		arrSum+=arr[i];
		arr[i]=-arr[i];
	}
	int maxCircular=arrSum+MaxSubSum(arr,size);
	int overAll=max(maxNormal,maxCircular);
	cout<<overAll;
}
