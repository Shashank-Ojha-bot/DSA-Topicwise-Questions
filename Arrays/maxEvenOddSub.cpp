#include<bits/stdc++.h>
using namespace std;
int maxEvenOddSub(int arr[],int n)
{
	int globalCount=1;
	int count=1;
	for(int i=0;i<n-1;i++)
	{
		if((arr[i+1]%2==0 and arr[i]%2!=0) or(arr[i+1]%2!=0 and arr[i]%2==0))
		{
		count++;
		globalCount=max(globalCount,count);}
		else
		{
			count=1;
		}
	}
	return globalCount;
}


int main()
{
	int arr[]={1,2,4,6,7,8,9,10,14};
	int size=sizeof(arr)/sizeof(arr[0]);
	cout<<maxEvenOddSub(arr,size);
}
