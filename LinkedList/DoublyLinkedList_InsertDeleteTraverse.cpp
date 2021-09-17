#include<bits/stdc++.h>
using namespace std;
struct node{
	int data;
	node* prev;
	node* next;
	node(int d)
	{
		data=d;
		prev=NULL;
		next=NULL;
	}
}*head=NULL,*tail=NULL;
node* insertBegin(node* p,int data)
{
	if(p==NULL)
	{
		p=new node(data);
		tail=p;
		return p;
	}
	else
	{
		node* q=new node(data);
		q->prev=p->prev;
		p->prev=q;
		q->next=p;
		head=q;
	}
}
void traverse(node* p)
{
	while(p)
	{
		cout<<"Address of prev is "<<p->prev<<endl;
		cout<<"\t\t\tData at the node is "<<p->data<<endl;
		cout<<"Address of next is "<<p->next<<endl;
		p=p->next;
	}
}
node* insertLast(node* p,int data)
{
	if(p==NULL)
	{
		p=new node(data);
		return p;
	}
	else
	{
		node* q=new node(data);
		tail->next=q->next;
		q->prev=tail;
		tail->next=q;
		tail=q;
	}
}
node* DeleteFirst(node* p)
{
	p->next->prev=NULL;
	node* q=p->next;
	//delete(q);
	head=q;
}
node* DeleteLast(node* p)
{
	tail->prev->next=NULL;
	tail=tail->prev;
}
void reverse(node* p,int size)
{
int a=1;
int b=size;
node *h=head;
node* t=tail;
while(a<=b)
{
	cout<<"inside"<<endl;
	int x=h->data;
	h->data=t->data;
	t->data=x;
	h=h->next;
	t=t->prev;
	a=a+1;
	b=b-1;
}	
}
int main()
{
	head=insertBegin(head,10);
	insertLast(head,55);
	insertBegin(head,20);
	insertBegin(head,30);
	insertBegin(head,40);
	insertBegin(head,50);
	insertLast(head,60);
	insertLast(head,70);
	//DeleteFirst(head);
	//DeleteFirst(head);
	//DeleteLast(head);
	//DeleteLast(head);
	traverse(head);
	cout<<endl;
	reverse(head,8);
	traverse(head);
	cout<<"data at the tail is "<<tail->data;
}
