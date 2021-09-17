#include<bits/stdc++.h>
using namespace std;
int maxLengthSubarrGivenSum(int arr[],int n,int given)
{
	unordered_map<int,int> m;
	int preSum=0;
	int maxLength=INT_MIN;
	for(int i=0;i<n;i++)
	{
		preSum+=arr[i];
		//unordered_map<int,int>::iterator itr;
		//itr=m.find(preSum-given);
		if(preSum==given)
		{
			int length=i+1;
			maxLength=max(length,maxLength);
		}
		if(m.find(preSum)==m.end())
		{
			m[preSum]=i;
		}
		if(m.find(preSum-given)!=m.end())
		{
			int length=i-(m.find(preSum-given)->second);
			maxLength=max(maxLength,length);
		}
		
		
	}
	return maxLength==INT_MIN?0:maxLength;
}
int main()
{
	int arr[]={8,3,1,5,-6,6,2,2};
	int size=sizeof(arr)/sizeof(arr[0]);
	int given=4;
	cout<<maxLengthSubarrGivenSum(arr,size,given);
}
