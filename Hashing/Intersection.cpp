#include<bits/stdc++.h>
using namespace std;
int Intersection(int arr[],int arr1[],int x,int n)
{
	unordered_map<int,int> m;
	for(int i=0;i<x;i++)
		m[arr[i]]++;
	int count=0;
	for(int i=0;i<n;i++)
	{
		unordered_map<int,int>::iterator itr;
		itr=m.find(arr1[i]);
		if(itr!=m.end() and itr->second!=-1)
		{
		count++;
		itr->second=-1;
		}	
	}
	return count;	
}

//To remove an element from unordered set we use s.erase(element value);
int main()
{
	int arr[]={10,10,10};
	int arr1[]={10,10,10};
	int m=sizeof(arr)/sizeof(arr[0]);
	int n=sizeof(arr1)/sizeof(arr1[0]);
	cout<<Intersection(arr,arr1,m,n);
}
