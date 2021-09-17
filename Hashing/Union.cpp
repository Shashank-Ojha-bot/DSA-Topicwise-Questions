#include<bits/stdc++.h>
using namespace std;
int Union(int arr[],int arr1[],int m,int n)
{
	unordered_set<int> s;
	for(int i=0;i<m;i++)
	s.insert(arr[i]);
	for(int i=0;i<n;i++)
	s.insert(arr1[i]);
	return s.size();
}
int main()
{
	int arr[]={3,3,3};
	int arr1[]={3,3};
	int m=sizeof(arr)/sizeof(arr[0]);
	int n=sizeof(arr1)/sizeof(arr1[0]);
	cout<<Union(arr,arr1,m,n);
}
