//Time Complexity : theta(n)
#include<bits/stdc++.h>
using namespace std;
int* reverse(int arr[],int n)
{
	int i=0;
	int j=n-1;
	while(i<j)
	{
		arr[i]=arr[i]+arr[j];
		arr[j]=arr[i]-arr[j];
		arr[i]=arr[i]-arr[j];
		i++;j--;
	}
	return arr;
}
int main()
{
	int arr[]={10,20,30,40,50,60};
	int size=sizeof(arr)/sizeof(arr[0]);
	reverse(arr,size);
	for(int i=0;i<size;i++)
	{
		cout<<arr[i]<<endl;
	}
}
