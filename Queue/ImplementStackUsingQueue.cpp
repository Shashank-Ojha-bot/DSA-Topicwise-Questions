#include<bits/stdc++.h>
using namespace std;
struct Stack
{
	queue<int> q1,q2;
	int pop()
	{
	int a=q1.front();
	q1.pop();
	return a;
	}
	int size()
	{
		return q1.size();
	}
	int top()
	{
		return q1.front();
	}
	void push(int data)
	{
		while(q1.empty()==false)
		{
			q2.push(q1.front());
			q1.pop();
		}
		q1.push(data);
		while(q2.empty()==false)
		{
			q1.push(q2.front());
			q2.pop();
		}
	}
};
int main()
{
	Stack s;
	s.push(10);
	s.push(20);
	s.push(30);
	cout<<s.pop()<<endl;
	cout<<s.top()<<endl;
	s.push(50);
	cout<<s.top()<<endl;
}
