//Time Complexity: theta(n)

#include<bits/stdc++.h>
using namespace std;
int secondLargest(int arr[],int n)
{
	int res=-1;
	int largest=0;
	for(int i=0;i<n;i++)
	{
		if(arr[i]>arr[largest])
		{
			res=largest;
			largest=i;
		}
		else if(arr[i]<arr[largest])
		{
			if(res==-1 or arr[i]>arr[res])
			res=i;
		}
	}
	return res;
}
int main()
{
	int arr[]={10,20,30,8,22};
	int n=sizeof(arr)/sizeof(arr[0]);
	cout<<arr[secondLargest(arr,n)];
}
