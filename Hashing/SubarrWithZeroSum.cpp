#include<bits/stdc++.h>
using namespace std;
int SubZeroSum(int arr[],int n)
{
	unordered_set<int> s;
	int preSum=0;
	for(int i=0;i<n;i++)
	{
		preSum+=arr[i];
		if(s.find(preSum)!=s.end())
		return true;
		if(preSum==0)          //for the condition when subarray starting index is 0
			return true;
		else
		{
		s.insert(preSum);	
		}
	}
	return false;
}
int main()
{
	int arr[]={10,-10};
	int size=sizeof(arr)/sizeof(arr[0]);
	cout<<SubZeroSum(arr,size);
}
