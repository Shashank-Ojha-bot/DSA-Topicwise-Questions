#include<bits/stdc++.h>
using namespace std;
//int majorityElement(int arr[],int n)
//{
//	
//	for(int i=0;i<n;i++)
//	{
//		int count=0;
//		for(int j=0;j<n;j++)
//		{
//			if(arr[i]==arr[j])
//			{
//			count++;
//			if(count>=(n/2))
//			{
//			return i;}
//			}
//		}
//}
//return 0;
//}

int majorityElement(int arr[],int n)
{
	int res=0;
	int count=1;
	for(int i=1;i<n;i++)
	{
		if(arr[i]==arr[res])
		count++;
		else
		count--;
		if(count==0)
		{
			res=i;
			count=1;
		}
	}
	return res;
}
int main()
{
	int arr[]={3,7,4,7,7,5};
	int size=sizeof(arr)/sizeof(arr[0]);
	int index=majorityElement(arr,size);
	int ele=arr[index];
	int count=0;
	for(int i=0;i<size;i++)
	{
		if(arr[i]==ele)
		count++;
	}
	if(count>(size/2))
	cout<<"Majority element at index "<<index;
	else
	cout<<"No majority element exists"<<endl;
}
