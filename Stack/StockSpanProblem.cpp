#include<bits/stdc++.h>
using namespace std;
int* StockSpanProblem(int arr[],int size)
{
	int* span=new int[size];
	span[0]=1;
	for(int i=1;i<size;i++)
	{
		int d=1;
		if(arr[i-1]<=arr[i])
		{
			//d+=span[i-1];
			int j=i-1;
			while(j>=0 and arr[j]<=arr[i])
			{
				d+=span[j];
				j=j-span[j];
			}
		}
		span[i]=d;
	}
	return span;
}
int main()
{
	int arr[]={13,15,12,14,16,8,6,4,10,30};
	//int arr[]={40,30,20,10};
	int size=sizeof(arr)/sizeof(arr[0]);
	int* span=StockSpanProblem(arr,size);
	for(int i=0;i<size;i++)
	{
		cout<<*(span+i)<<" ";
	}
}
