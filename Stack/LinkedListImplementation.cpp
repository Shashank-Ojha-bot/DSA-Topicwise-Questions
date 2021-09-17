#include<bits/stdc++.h>
using namespace std;
struct node
{
	int data;
	node* next;
	node(int d)
	{
		data=d;
		next=NULL;
	}
};
struct Stack
{
	node* head;
	int size;
	Stack()
	{
		head=NULL;
		size=0;
	}
	void push(int data)
	{
		node *temp=new node(data);
		temp->next=head;
		size++;
		head=temp;
	}
	int pop()
	{
		if(size==0)
		{
			cout<<"Underflow"<<endl;
			return 0;
		}
		int data=head->data;
		head=head->next;
		size--;
		return data;
	}
	int peek()
	{
		if(size==0)
		{
			cout<<"Underflow"<<endl;
			return 0;
		}
		return head->data;
	}
	bool isEmpty()
	{
		if(size==0)
		{
		cout<<"Empty stack"<<endl;
		return true;}
		return false;
	}
	int Size()
	{
		return size;
	}
};
int main()
{
	Stack s;
	s.push(10);
	s.push(20);
	s.push(30);
	cout<<s.pop()<<endl;
	cout<<s.peek()<<endl;
	s.push(50);
	cout<<s.isEmpty()<<endl;
	cout<<s.peek()<<endl;
}
