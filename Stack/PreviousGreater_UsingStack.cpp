#include<bits/stdc++.h>
using namespace std;
void PreviousGreater(int arr[],int size)
{
	stack<int> s;
	s.push(arr[0]);
	cout<<-1<<" ";
	for(int i=1;i<size;i++)
	{
		while(s.empty()==false and s.top()<=arr[i])
		s.pop();
		int prevGreater=s.empty()?-1:s.top();
		cout<<prevGreater<<" ";
		s.push(arr[i]);
	}
}
int main()
{
	//int arr[]={15,10,18,12,4,6,2,8};
	int arr[]={10,20,30,40};
	int size=sizeof(arr)/sizeof(arr[0]);
	PreviousGreater(arr,size);
}
