#include<bits/stdc++.h>
using namespace std;
int removeDuplicates(int arr[],int n)
{
int res=1;
for(int i=1;i<n;i++)
{
	if(arr[i]!=arr[res-1])
	{
		arr[res]=arr[i];
		res++;
	}
}
return res;
}
int main()
{
	int arr[]={10,10,20,20,20,30,40,40};
	int size=sizeof(arr)/sizeof(arr[0]);
	int res=removeDuplicates(arr,size);
	for(int i=0;i<res;i++ )
	{
		cout<<arr[i]<<endl;
	}
}
