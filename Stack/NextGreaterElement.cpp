//Similar appraoch as Previous Greater problem. The difference is that we traverse and process the array from right 
//side instead of left as in in PreviousGreater problem. We do this because the previous Greater elemnt from the right
//is Next greater element from the left. So we apply the same strategy as previous greater and just apply it from the 
//reverse side


//REMEMEBER : The o/p is printed in reverse;
#include<bits/stdc++.h>
using namespace std;
void NextGreaterElement(int arr[],int size)
{
	stack<int> s;
	s.push(arr[size-1]);
	cout<<-1<<" ";
	for(int i=size-2;i>=0;i--)
	{
		while(s.empty()==false and s.top()<=arr[i])
			s.pop();
		int PrevGreaterFromRight=s.empty()?-1:s.top();
		cout<<PrevGreaterFromRight<<" ";
		s.push(arr[i]);
	}
}
int main()
{
	int arr[]={5,15,10,8,6,12,9,18};
	//int arr[]={10,20,30,40};
	int size=sizeof(arr)/sizeof(arr[0]);
	NextGreaterElement(arr,size);
}
