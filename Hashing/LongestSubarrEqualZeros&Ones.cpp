#include<bits/stdc++.h>
using namespace std;
int longestSubarrZeroSum(int arr[],int n)
{
	for(int i=0;i<n;i++)
	{
		if(arr[i]==0)
			arr[i]=-1;
	}
	int preSum=0;
	unordered_map<int,int> m;
	int maxLength=0;
	for(int i=0;i<n;i++)
	{
		preSum+=arr[i];
		//unordered_map<int,int>::iterator itr;
		//itr=m.find(preSum)
		if(preSum==0)
		{
			int length=i+1;
			maxLength=max(maxLength,length);
		}
		if(m.find(preSum)==m.end())
		m[preSum]=i;
		if(m.find(preSum)!=m.end())
		{
			int length=i-(m.find(preSum)->second);
			maxLength=max(maxLength,length);
		}
	}
	return maxLength;
}
int main()
{
	int arr[]={0,0,1,0,1,1};
	int size=sizeof(arr)/sizeof(arr[0]);
	cout<<longestSubarrZeroSum(arr,size);
}
