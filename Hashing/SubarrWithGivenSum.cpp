#include<bits/stdc++.h>
using namespace std;
int SubarrGivenSum(int arr[],int n,int given)
{
	unordered_set<int> s;
	int preSum=0;
	for(int i=0;i<n;i++)
	{
		preSum+=arr[i];
		if(s.find(preSum-given)!=s.end())
		return 1;
		if(preSum==given)          //for the condition when subarray starting index is 0
		return true
		else
		s.insert(preSum);
	}
	return 0;
}
int main()
{
	int arr[]={5,8,6,13,3,-1};
	int size=sizeof(arr)/sizeof(arr[0]);
	int summ=22;
	cout<<SubarrGivenSum(arr,size,summ);
}
