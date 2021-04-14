#include<bits/stdc++.h>
using namespace std;
void leftRotate(int arr[],int n)
{
	int last=arr[0];
	for(int i=1;i<n;i++)
	{
		arr[i-1]=arr[i];
	}
	arr[n-1]=last;
}
int main()
{
	int arr[]={1,2,3,4,5,6,12};
	int size=sizeof(arr)/sizeof(arr[0]);
	leftRotate(arr,size);
	for(int i=0;i<size;i++)
	cout<<arr[i]<<endl;
}
