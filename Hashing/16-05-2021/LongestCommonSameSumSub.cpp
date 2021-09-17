#include<bits/stdc++.h>
using namespace std;
//int LongestCommonSameSumSub(int arr[],int arr1[],int n)
//{
//	int maxLength=0;
//	for(int i=0;i<n;i++)
//	{
//		int sum1=0;
//		int sum2=0;
//		for(int j=i;j<n;j++)
//		{
//			sum1+=arr[j];
//			sum2+=arr1[j];
//			if(sum1==sum2)
//			{
//				int res=j-i+1;
//				maxLength=max(res,maxLength);
//			}
//		}
//	}
//	return maxLength;
//}

//Efficient Approach Solution
int LongestCommonSameSumSub(int arr[],int arr1[],int n)
{
	int temp[n];
	for(int i=0;i<n;i++)
	{
	temp[i]=arr[i]-arr1[i];	
	}
	unordered_map<int,int> m;
	int prefixSum=0;
	int maxLength=0;
	for(int i=0;i<n;i++)
	{
		prefixSum+=temp[i];
		if(m.find(prefixSum)!=m.end())
		{
			int len=i-(m.find(prefixSum)->second);
			maxLength=max(len,maxLength);
		}
		if(prefixSum==0)
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
	int arr[]={0,1,0,1,1,1,1};
	int arr1[]={1,1,1,1,1,0,1};
	int size=sizeof(arr)/sizeof(arr[0]);
	
	cout<<LongestCommonSameSumSub(arr,arr1,size);
}
