#include<bits/stdc++.h>
using namespace std;

//Naive approach (TC :O(n2))
int LargestAreaHistogram(int arr[],int n)
{
	int res=INT_MIN;
	for(int i=0;i<n;i++)
	{
		int curr=arr[i];
		for(int j=i-1;j>=0;j--)
		{
			if(arr[j]>=arr[i])
			curr+=arr[i];
			else
			break;
		}
		for(int j=i+1;j<n;j++)
		{
			if(arr[j]>=arr[i])
			curr+=arr[i];
			else
			break;
		}
		res=max(curr,res);
	}
	return res;
}
vector<int> PreviousSmaller(int arr[],int size)
{
	stack<int> s;
	s.push(0);
	vector<int> preSmaller(size);
	preSmaller[0]=-1;
	for(int i=1;i<size;i++)
	{
		while(s.empty()==false and arr[s.top()]>=arr[i])
		{
			s.pop();
		}
		if(s.empty()==true)
		{
			preSmaller[i]=-1;
		}
		else
		{
			preSmaller[i]=s.top();
		}
		s.push(i);
	}
	return preSmaller;
}
vector<int> NextSmaller(int arr[],int size)
{
	stack<int> s;
	s.push(size-1);
	vector<int> nextSmaller(size);
	nextSmaller[size-1]=size;
	for(int i=size-2;i>=0;i--)
	{
		while(s.empty()==false and arr[s.top()]>=arr[i])
		{
			s.pop();
		}
		if(s.empty())
		nextSmaller[i]=size;
		else
		nextSmaller[i]=s.top();
		s.push(i);
	}
	return nextSmaller;
}

//Better Approach : Precompute "previous Smaller index" array and "Next Smaller index" array for all the elements
//of the height array and use them to calculate the area for each element of the height array.
int LargestArea(int arr[],int n)
{
vector<int> preSmaller=PreviousSmaller(arr,n);
vector<int> nextSmaller=NextSmaller(arr,n);
int maxArea=INT_MIN;
for(int i=0;i<n;i++)
{
int curr=arr[i];
curr+=(i-preSmaller[i]-1)*arr[i];
curr+=(nextSmaller[i]-i-1)*arr[i];
maxArea=max(maxArea,curr);	
	
}
return maxArea;
}
int main()
{
	int arr[]={2,5,1};
	int size=sizeof(arr)/sizeof(arr[0]);
	//cout<<LargestAreaHistogram(arr,size);
	cout<<LargestArea(arr,size);
}
