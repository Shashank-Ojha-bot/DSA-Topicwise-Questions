#include<bits/stdc++.h>
using namespace std;
int longestSubGivenSum(int arr[],int size,int given)
{
	unordered_map<int,int> m;
	int prefixSum=0;
	int maxLength=0;
	for(int i=0;i<size;i++)
	{
		prefixSum+=arr[i];
		if(m.find(prefixSum-given)!=m.end())
		{
			int len=i-(m.find(prefixSum-given)->second);
			maxLength=max(len,maxLength);
		}
		if(prefixSum==given)
		{
			int len=i+1;
			maxLength=max(len,maxLength);
		}
		if(m.find(prefixSum)==m.end())
		{
		m[prefixSum]=i;
		}
	}
	return maxLength;
}
int main()
{
	int arr[]={5,8,-4,-4,9,-2,2};
	int size=sizeof(arr)/sizeof(arr[0]);
	int given=0;
	cout<<longestSubGivenSum(arr,size,given);
}
