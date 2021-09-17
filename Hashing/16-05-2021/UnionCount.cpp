#include<bits/stdc++.h>
using namespace std;
int unionCount(int arr[],int arr1[],int size,int size1)
{
	unordered_set<int> s;
	for(int i=0;i<size;i++)
	{
		s.insert(arr[i]);
	}
	for(int i=0;i<size1;i++)
	{
		s.insert(arr1[i]);
	}
	return s.size();
}
int main()
{
	int arr[]={10,12,15};
	int arr1[]={18,12};
	int size=sizeof(arr)/sizeof(arr[0]);
	int size1=sizeof(arr1)/sizeof(arr1[0]);
	cout<<unionCount(arr,arr1,size,size1);
}
