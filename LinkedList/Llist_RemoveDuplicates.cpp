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
void removeDuplicates(node* p)
{
	if(p==NULL or p->next==NULL)
	return;
	while(p)
	{
		int d=p->data;
		int n=p->next?p->next->data:d+2;
		if(d==n)
		{
			node* q=p->next;
			while(q)
			{
				if(q->data==d)
				q=q->next;
				else
				break;
			}
			p->next=q;
			p=p->next;
		}
		else
		{
		p=p->next;
		}
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
void SegregateEvenOddNodes(node* p)
{
	//node *p=head;
	while(p)
	{
		if(p->data%2!=0)
		{
			node *q=p->next;
			while(q and q->data%2!=0)
			{
				q=q->next;
			}
			if(q==NULL)
			return;
			else
			{
				int a=q->data;
				q->data=p->data;
				p->data=a;
			}
		}
		p=p->next;
	}
}
void pairwiseReverse(node* p)
{
	if(p==NULL and p->next==NULL)
	return;
	node* j=p->next;
	while(p and j)
	{
		int a=p->data;
		p->data=j->data;
		j->data=a;
		p=p->next->next;
		j=j->next?j->next->next:NULL;
	}
}
int main()
{
	head=insertSorted(head,1);
	insertSorted(head,2);
//	insertSorted(head,3);
//	insertSorted(head,4);
//	insertSorted(head,5);
//	insertSorted(head,6);
//	insertSorted(head,7);
//	insertSorted(head,4);
//	insertSorted(head,4);
//	insertSorted(head,4);
//	insertSorted(head,6);


	traverse(head);
	
	cout<<endl;
	cout<<"After reversing pairwise "<<endl;
	cout<<endl;
	
	pairwiseReverse(head);
	traverse(head);
	
//	cout<<"After segregating "<<endl;
//	cout<<endl;
	
//	SegregateEvenOddNodes(head);
//	traverse(head);
	//removeDuplicates(head);
	//cout<<endl;
	//cout<<"After removing dupliactes "<<endl;
	//cout<<endl;
	//traverse(head);
}
