#include<bits/stdc++.h>
using namespace std;
bool Pair(int arr[],int size,int given)
{
	unordered_set<int> s;
	s.insert(arr[0]);
	for(int i=1;i<size;i++)
	{
		if(s.find(given-arr[i])!=s.end())
		{
			return true;
		}
		s.insert(arr[i]);
	}
	return false;
}
int main()
{
	int arr[]={5,8,-3,6};
	int size=sizeof(arr)/sizeof(arr[0]);
	int given=3;
	cout<<Pair(arr,size,given);
}
