#include<bits/stdc++.h>
using namespace std;
int getSum(int prefixSum[],int l,int r)
{
	if(l!=0)
		return prefixSum[r]-prefixSum[l-1];
	else
		return prefixSum[r];
}
int main()
{
	int arr[]={2,8,3,9,6,5,4};
	int size=sizeof(arr)/sizeof(arr[0]);
	int prefixSum[size];
	prefixSum[0]=arr[0];
	for(int i=0;i<size;i++)
	{
		prefixSum[i]=prefixSum[i-1]+arr[i];
	}
	int l=2;
	int r=6;
	cout<<getSum(prefixSum,l,r);
}
