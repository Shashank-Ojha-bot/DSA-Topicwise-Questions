#include<bits/stdc++.h>
using namespace std;
struct Queue
{
	int* arr;
	int cap;
	int front;
	int rear;
	Queue(int c)
	{
		cap=c;
		arr=new int[cap];
		front=-1;
		rear=-1;
	}
	void enqueue(int data)
	{
		if((rear+1)%cap==front)
		{
		cout<<"Queue is full"<<endl;
		return;}
		else if(isEmpty())
		{
			front=rear=0;
		}
		else
		{
			rear=(rear+1)%cap;
		}
		arr[rear]=data;
	}
	int dequeue()
	{
		int data=0;
		if(isEmpty())
		{
			cout<<"Queue is empty"<<endl;
			return 0;
		}
		
		else if(front==rear)
		{
			data=arr[front];
			front=rear=-1;
			//return 0;
		}
		else
		{
			data=arr[front];
			front=(front+1)%cap;
		}
		return data;
	}
	int isEmpty()
	{
		if(front==-1 and rear==-1)
		return 1;
		else
		return 0;
	}
	int atFront()
	{
		return arr[front];
	}
};
int main()
{
	Queue q(6);
	q.enqueue(1);
	q.enqueue(2);
	q.enqueue(3);
	q.enqueue(4);
	q.enqueue(5);
	q.enqueue(6);
	q.enqueue(7);
	cout<<q.dequeue()<<endl;
	cout<<q.dequeue()<<endl;
	cout<<q.dequeue()<<endl;
	q.enqueue(8);
	q.enqueue(9);
	q.enqueue(10);
	//cout<<"Rear "<<q.arr[q.rear]<<endl;
	cout<<q.dequeue()<<endl;//4
	cout<<q.dequeue()<<endl;//5
	cout<<q.dequeue()<<endl;//6
	cout<<q.dequeue()<<endl;//8
	cout<<q.dequeue()<<endl;//9
	cout<<q.dequeue()<<endl;//10
	//cout<<q.dequeue()<<endl;
	//cout<<q.dequeue()<<endl;
//	cout<<"Front "<<q.arr[q.front];
	
}
