#include<bits/stdc++.h>
using namespace std;
int ConsecutiveOnes(bool arr[],int n)
{
	int FinalCount=0;
	int count=0;
	for(int i=0;i<n;i++)
	{
		if(arr[i]==1)
		{
			count++;	
		}
		else
		{
		FinalCount=max(count,FinalCount);
		count=0;}
	}
	return max(FinalCount,count);
}
int main()
{
	bool arr[]={0,1,1,0,1,1,1,0,1,1};
	int size=sizeof(arr)/sizeof(arr[0]);
	cout<<ConsecutiveOnes(arr,size);
}
