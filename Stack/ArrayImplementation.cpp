#include<bits/stdc++.h>
using namespace std;
struct Stack
{
	int *arr;
	int cap;
	int top;
	Stack(int cap)
	{
		this->cap=cap;
		arr=new int[this->cap];
		top=-1;
	}
	void push(int x)
{
	if(top==cap-1)
	{cout<<"Overflow"<<endl;return;
	}
	top++;
	arr[top]=x;
}
int pop()
{
	if(top==-1)
	{cout<<"Underflow"<<endl;return 0;
	}
	int res=arr[top];
	top--;
	return res;
}
int peek()
{
	if(top==-1)
	{
		cout<<"Underflow"<<endl;return 0;
	}
	return arr[top];
}
void isEmpty()
{
	if(top==-1)
	cout<<"Stack empty"<<endl;
}
int size()
{
	return top+1;
}
};

int main()
{
	Stack s(5);
	s.push(10);
	s.push(20);
	s.push(30);
	cout<<s.pop()<<endl;
	cout<<s.size()<<endl;
	cout<<s.peek()<<endl;
}
