#include<bits/stdc++.h>
using namespace std;
struct node
{
	int data;
	node *next;
	node(int x)
	{
		data=x;
		next=NULL;
	}
}*head=NULL;
node* insertEnd(node *head,int data)
{
	if(head==NULL)
	{
		head=new node(data);
		return head;
	}
	else
	{
		node *p=head;
		while(p->next)
		{
			p=p->next;
		}
		p->next=new node(data);
			return p;
	}

}
void traverse(node* p)
{
	while(p)
	{
		cout<<"Address of current element is "<<p<<endl;
		cout<<"Data is "<<p->data<<endl;
		cout<<"Address of next element is "<<p->next<<endl;
		p=p->next;
	}
}
node* insertBegin(node *p,int data)
{
	if(p==NULL)
	{
		p=new node(data);
		return p;
	}
	else
	{
		//node* p=head;
		node *q=new node(data);
		q->next=head;
		head=q;
		//return head;
	}
}
node* deleteFirst(node* p)
{
	node *q=p;
	head=q->next;
	delete(q);
}
node* deleteLast(node* p)
{
	if(p->next->next)
	{
		while(p->next->next)
		{
			p=p->next;
		}
	}
	//delete(p->next);
	p->next=NULL;
}
void InsertAtGivenPos(node* p,int data,int pos)
{
	int count=1;
	while(count<pos-1)
	{
		p=p->next;
		count++;
	}
	if(p==head)
	{
		node* q=new node(data);
		q->next=head;
		head=q;
	}
	else
	{
		node* q=new node(data);
		q->next=p->next;
		p->next=q;
	}
}
int main()
{
	//node *head=NULL;
	head=insertEnd(head,10);
	insertEnd(head,20);
	insertEnd(head,30);
	insertEnd(head,40);
	insertBegin(head,50);
	insertBegin(head,60);
	insertBegin(head,70);
	deleteFirst(head);
	deleteLast(head);
	InsertAtGivenPos(head,70,4);
	InsertAtGivenPos(head,8,1);
	InsertAtGivenPos(head,7,7);
	InsertAtGivenPos(head,17,9);
	traverse(head);
}
