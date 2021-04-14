#include<bits/stdc++.h>
using namespace std;
int stockBuySell(int arr[],int start,int end)
{
	int profit=0;
	for(int i=start;i<end;i++)
	{
		for(int j=i+1;j<=end;j++)
		{
			if(arr[j]>arr[i])
			{
			int currProfit=arr[j]-arr[i]+stockBuySell(arr,start,i-1)+stockBuySell(arr,j+1,end);
			profit=max(profit,currProfit);}
		}
	}
	return profit;
}
int main()
{
	int arr[]={1,5,3,8,12};
	int size=sizeof(arr)/sizeof(arr[0]);
	cout<<stockBuySell(arr,0,size-1);
}
