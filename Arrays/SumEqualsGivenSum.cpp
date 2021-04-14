#include<bits/stdc++.h>
using namespace std;
int SubGivenSum(int arr[],int n,int givenSum)
{
	int currSum=arr[0];
	int start=0;
	//int end=n-1;
	for(int e=1;e<=n;e++)
	{
		while(currSum>givenSum and start<e-1)  //start<e-1 condition checks for the case when no Subarray with given sum exists.
		{
			currSum-=arr[start];
			start++;
		}
		if(currSum==givenSum)
			return true;
		if(e<n)
			currSum+=arr[e];
	}
	return false;
}
int main()
{
	int arr[]={18,1,5,3};
	int size=sizeof(arr)/sizeof(arr[0]);
	int givenSum=3;
	cout<<SubGivenSum(arr,size,givenSum);
}
