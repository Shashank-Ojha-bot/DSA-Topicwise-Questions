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
}*head=NULL;
node* insertEnd(node* p,int data)         //can be of O(1) time complexity if we maintain a tail pointer.
{
	if(p==NULL)
	{
		p=new node(data);
		p->next=p;
		return p;
	}
	else
	{
		while(p->next!=head)
		{
			p=p->next;
		}
		p->next=new node(data);
		p->next->next=head;
	}
}
void traverse(node* p)
{
	cout<<"Address of the head node is "<<p<<endl;
	cout<<"Data at the node is "<<p->data<<endl;
	cout<<"Address of the next node is "<<p->next<<endl;
	p=p->next;
	while(p!=head)
	{
		cout<<"Data at the node is "<<p->data<<endl;
		cout<<"Address of the next node is "<<p->next<<endl;

		p=p->next;
	}
}
node* insertBegin(node* p,int data)              //O(1) time complexity
{
	if(p==NULL)
	{
		p=new node(data);
		p->next=p;
		return p;
	}
	else
	{
		node *temp=new node(data);
		temp->next=head->next;
		head->next=temp;
		int a=head->data;
		head->data=temp->data;
		temp->data=a;
	}
}
node* deleteHead(node* p)       //O(1) Time complexity(copying the data of 2nd node into 1st node and then
{                               //deleting the second node so that there is an effect of 1st node getting deleted
	if(p==NULL)
		return NULL;
	if(p->next==p)
	{
		head=NULL;
	}
	else
	{
		int a=head->next->data;
		head->data=a;
		node *q=head->next;
		head->next=head->next->next;
		delete(q);
		//q->next=NULL;
	}
}
int main()
{
	head=insertEnd(head,10);
	insertEnd(head,20);
	insertEnd(head,30);
	insertEnd(head,40);
	insertEnd(head,50);
	insertBegin(head,60);
	insertBegin(head,70);
	insertBegin(head,80);
	deleteHead(head);
	traverse(head);
}
