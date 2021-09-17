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

//using count of Elements. Requires two traversals of the LinkedList.
/*int middle(node *p)
{
	node *q=p;
	int count=0;
	while(q)
	{
		count++;
		q=q->next;
	}
	if(count==1)
	return p->data;
	if(count==0)
	return 0;
	double middle=round(count/2);
	count=0;
	q=NULL;
	while(count<middle)
	{
		count++;
		q=p;
		p=p->next;
	}
	//if(count%2==0)
	return p->data;
	//else
	//return q->data;
	
}*/

//Using slow and fast pointers. Requires 1 traversal
int middle(node* p)
{
	node *slow=p;
	node* fast=p;
	while(fast->next and fast->next->next)
	{
		slow=slow->next;
		fast=fast->next->next;
	}
	if(fast->next)
	return slow->next->data;
	else
	return slow->data;
}
node* insertSorted(node *p,int data)
{
	if(p==NULL)
	{
		p=new node(data);
		return p;
	}
	else
	{
		if(p->data>data)
		{
			node* q=new node(data);
			q->next=head;
			head=q;
		}
		else
		{
			node* q=NULL;
			while(p)
			{ 
				if(p->data>data)
				{
				break;
				}
				q=p;
				p=p->next;	
			}
			node* a=new node(data);
			a->next=q->next;
			q->next=a;
		}
	}

}
int nthNodeFromEnd(node* p,int n)
{
	node *q=p;
	int count=0;
	while(q)
	{
		count++;
		q=q->next;
	}
	if(n>count)
	return 0;
	int posFromStart=count-n+1;
	count=0;
	q=NULL;
	while(count<posFromStart)
	{
		count++;
		q=p;
		p=p->next;
	}
	return q->data;
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

node* rev(node* p)
{
	if(p==NULL)
		return NULL;
	node* start=NULL;
	node* mid=p;
	node* end=p->next;
	while(mid)
	{
		mid->next=start;
		start=mid;
		mid=end;
		end=end?end->next:NULL;
		
	}
	
	return start;
}

int main()
{
	//node *head=NULL;
	head=insertSorted(head,10);
	insertSorted(head,15);
	insertSorted(head,25);
	insertSorted(head,30);
	insertSorted(head,40);
	insertSorted(head,5);
	insertSorted(head,20);
	insertSorted(head,45);
	cout<<"Middle element is "<<middle(head)<<endl;
	cout<<nthNodeFromEnd(head,2)<<endl;
	cout<<nthNodeFromEnd(head,4)<<endl;
	cout<<nthNodeFromEnd(head,8)<<endl;
	cout<<nthNodeFromEnd(head,9)<<endl;
	traverse(head);
	head=rev(head);
	traverse(head);
}
