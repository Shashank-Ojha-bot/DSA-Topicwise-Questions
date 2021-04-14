#include<bits/stdc++.h>
using namespace std;
int Nbonnaci(int n,int M)
{
	int arr[M];
	for(int i=0;i<n-1;i++)
	{
		arr[i]=0;
	}
	arr[n-1]=1;
	int Sum=1;
	for(int i=n;i<M;i++)
	{
		arr[i]=Sum;
		Sum=Sum-arr[i-n]+arr[i];
	}
	for(int i=0;i<M;i++)
	{
		cout<<arr[i]<<" ";
	}
}
int main()
{
	Nbonnaci(4,10);
}
