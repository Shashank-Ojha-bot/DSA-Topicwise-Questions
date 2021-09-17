#include<bits/stdc++.h>
using namespace std;
void StockSpan(int arr[],int size)
{
	stack<int> s;
	s.push(0);
	cout<<1<<" ";
	for(int i=1;i<size;i++)
	{
		while(s.empty()==false and arr[s.top()]<=arr[i])
		s.pop();
		int span=s.empty()?i+1:i-s.top();
		cout<<span<<" ";
		s.push(i);
	}
}
int main()
{
	int arr[]={13,15,12,14,16,8,6,4,10,30};
	//int arr[]={40,30,20,10};
	int size=sizeof(arr)/sizeof(arr[0]);
	StockSpan(arr,size);
}
