#include<bits/stdc++.h>
using namespace std;
int SubGivenSum(int arr[],int size,int given)
{
	unordered_set<int> s;
	int prefixSum=0;
	for(int i=0;i<size;i++)
	{
		prefixSum+=arr[i];
		if(s.find(prefixSum-given)!=s.end())
		{
			return true;
		}
		if(prefixSum==given)
		return true;
		s.insert(prefixSum);
	}
	return false;
}
int main()
{
	int arr[]={3,2,5,6};
	int size=sizeof(arr)/sizeof(arr[0]);
	int given=10;
	cout<<SubGivenSum(arr,size,given);
}
