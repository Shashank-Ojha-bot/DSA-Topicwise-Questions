#include<bits/stdc++.h>
using namespace std;
int Majority(int arr[],int n)
{
	int res=0;
	int count=1;
	for(int i=1;i<n;i++)
	{
		if(arr[i]==arr[res])
		count++;
		else
		count--;
		if(count==0)
		{
			res=i;
			count=1;
		}
	}
	int newCount=0;
	for(int i=0;i<n;i++)
	{
		if(arr[i]==arr[res])
		newCount++;
	}
	if(newCount>n/2)
	return res;
	else
	return -1;
}
int main()
{
	int arr[]={20,30,40,50,50,50,50};
	int size=sizeof(arr)/sizeof(arr[0]);
	cout<<Majority(arr,size);
}
