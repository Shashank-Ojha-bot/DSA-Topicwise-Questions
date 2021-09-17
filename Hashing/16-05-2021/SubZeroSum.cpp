#include<bits/stdc++.h>
using namespace std;
bool SubZeroSum(int arr[],int size)
{
unordered_set<int> prefix;
int prefixSum=0;
for(int i=0;i<size;i++)
{
	prefixSum+=arr[i];
	if(prefix.find(prefixSum)!=prefix.end())
	{
		return true;
	}
	if(prefixSum==0)
	{
		return true;
	}
	prefix.insert(prefixSum);
}
return false;	
}
int main()
{
	int arr[]={5,6,0,8};
	int size=sizeof(arr)/sizeof(arr[0]);
	cout<<SubZeroSum(arr,size);
}
