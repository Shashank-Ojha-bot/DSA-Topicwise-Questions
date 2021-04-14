//Time complexity : thete(N)
//Space complexity :theta(N)

#include<bits/stdc++.h>
using namespace std;
void leftRotateByD(int arr[],int n,int d)
{
	int a[d];
	for(int i=0;i<d;i++)
	a[i]=arr[i];
	for(int i=d;i<n;i++)
	{
		arr[i-d]=arr[i];
	}
	int j=0;
	for(int i=n-d;i<n;i++)
	{
		arr[i]=a[j++];
	}
}
int main()
{
	int arr[]={10,5,30,15};
	int size=sizeof(arr)/sizeof(arr[0]);
	leftRotateByD(arr,size,3);
	for(int i=0;i<size;i++)
	cout<<arr[i]<<endl;
}
