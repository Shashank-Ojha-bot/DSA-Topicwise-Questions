#include<bits/stdc++.h>
using namespace std;
int majorityElement(int arr[],int size)
{
	int count=0;
	int ele=0;
	for(int i=0;i<size;i++)
	{
		if(count==0)
		ele=arr[i];
		if(ele=arr[i])
		count++;
		else
		count--;
	}
	return ele;
}
int main()
{
	int arr[]={7,7,5,7,5,1,5,7,5,5,7,7,5,5,5,5};
	int size=sizeof(arr)/sizeof(arr[0]);
	cout<<majorityElement(arr,size);
}
