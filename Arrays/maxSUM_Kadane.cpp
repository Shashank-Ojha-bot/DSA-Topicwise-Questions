#include<bits/stdc++.h>
using namespace std;
int maxSubSum(int arr[],int n)
{
	int max_currentSum=0;
	int max_globalSum=arr[0];
	for(int i=0;i<n;i++)
	{
		max_currentSum=max(arr[i],max_currentSum+arr[i]);
		if(max_currentSum>max_globalSum)
		{
			max_globalSum=max_currentSum;
		}
	}
	return max_globalSum;
}
int main()
{
	int arr[]={-5,1,-2,3,-1,2,-2};
	int size=sizeof(arr)/sizeof(arr[0]);
	cout<<maxSubSum(arr,size);
}
