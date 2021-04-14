//Time complexity : thete(N)
//Space complexity :theta(1)

#include<bits/stdc++.h>
using namespace std;
void reverse(int arr[],int low,int high)
{
	while(low<high)
	{
		arr[low]=arr[low]+arr[high];
		arr[high]=arr[low]-arr[high];
		arr[low]=arr[low]-arr[high];
		low++;high--;
	}
}
void leftRotateByD(int arr[],int n,int d)
{
	reverse(arr,0,d-1);
	reverse(arr,d,n-1);
	reverse(arr,0,n-1);
}
int main()
{
	int arr[]={1,2,3,4,5};
	int size=sizeof(arr)/sizeof(arr[0]);
	leftRotateByD(arr,size,3);
	for(int i=0;i<size;i++)
	cout<<arr[i]<<endl;
}
