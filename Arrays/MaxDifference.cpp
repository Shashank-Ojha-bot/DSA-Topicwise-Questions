//Naive Solution:TC- theta(N^2)

#include<bits/stdc++.h>
using namespace std;
//int MaxDifference(int arr[],int n)
//{
//	int res=arr[1]-arr[0];
//	for(int i=0;i<n;i++)
//	{
//		for(int j=i+1;j<n;j++)
//		{
//			res=max(res,arr[j]-arr[i]);
//		}
//	}
//	return res;
//}
//int main()
//{
//	int arr[]={2,3,10,6,4,8,1};
//	int size=sizeof(arr)/sizeof(arr[0]);
//	cout<<MaxDifference(arr,size);
//}


//Efficient Solution- theta(N)

int MaxDifference(int arr[],int n)
{
	int res=arr[1]-arr[0];
	int minVal=arr[0];
	for(int j=0;j<n;j++)
	{
		res=max(res,arr[j]-minVal);
		minVal=min(minVal,arr[j]);
	}
	return res;
}

int main()
{
	int arr[]={2,3,10,6,4,8,1};
	int size=sizeof(arr)/sizeof(arr[0]);
	cout<<MaxDifference(arr,size);
}

