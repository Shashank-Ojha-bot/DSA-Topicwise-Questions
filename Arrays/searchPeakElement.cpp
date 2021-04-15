#include<bits/stdc++.h>
using namespace std;
int peakElement(int arr[],int n)
{
for(int i=0;i<n;i++)
{
	if(i==0)
	{
		if(arr[i]>arr[i+1])
			return arr[i];
	}
	else if(i==n-1)
	{
		if(arr[i]>arr[i-1])
		return arr[i];
	}
	else
	{
		if(arr[i]>arr[i-1] and arr[i]>arr[i+1])
		return arr[i];
	}
}	
}
int main()
{
	int arr[]={80,70,90};
	int size=sizeof(arr)/sizeof(arr[0]);
	cout<<peakElement(arr,size);
}
