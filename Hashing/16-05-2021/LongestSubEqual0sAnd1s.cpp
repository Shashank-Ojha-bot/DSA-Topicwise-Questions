#include<bits/stdc++.h>
using namespace std;
int LongestSubEqual0sand1s(int arr[],int size)
{
	unordered_map<int,int> m;
	int prefixSum=0;
	int maxLength=0;
	for(int i=0;i<size;i++)
	{
		if(arr[i]==0)
		arr[i]=-1;
	}
	for(int i=0;i<size;i++)
	{
		prefixSum+=arr[i];
		if(m.find(prefixSum)!=m.end())
		{
			int length=i-(m.find(prefixSum)->second);
			maxLength=max(length,maxLength);
		}
		if(prefixSum==0)
		{
			int length=i+1;
			maxLength=max(length,maxLength);
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
	int arr[]={1,0,1,1,1,0,0};
	int size=sizeof(arr)/sizeof(arr[0]);
	cout<<LongestSubEqual0sand1s(arr,size);
}
