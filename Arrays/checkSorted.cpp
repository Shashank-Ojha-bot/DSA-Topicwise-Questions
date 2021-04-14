#include<bits/stdc++.h>
using namespace std;
bool checkSorted(int arr[],int size)
{
	for(int i=0;i<size-1;i++)
	{
		if(arr[i+1]<arr[i])
		return false;
	}
	return true;
}
int main()
{
	int arr[]={10,20,30,40,15};
	int size=sizeof(arr)/sizeof(arr[0]);
	cout<<checkSorted(arr,size);
}
