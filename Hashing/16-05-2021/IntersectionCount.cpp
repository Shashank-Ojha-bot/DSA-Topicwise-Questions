#include<bits/stdc++.h>
using namespace std;
int intersectionCount(int arr[],int arr1[],int size,int size1)
{
	int count=0;
	unordered_set<int> s;
	for(int i=0;i<size;i++)
	{
		s.insert(arr[i]);
	}
	for(int i=0;i<size1;i++)
	{
		if(s.find(arr1[i])!=s.end())
		{
			count++;
			s.erase(arr1[i]);
		}
	}
	return count;
}
int main()
{
	int arr[]={10,10,10};
	int arr1[]={10,10,10};
	int size=sizeof(arr)/sizeof(arr[0]);
	int size1=sizeof(arr1)/sizeof(arr1[0]);
	cout<<intersectionCount(arr,arr1,size,size1);
}
