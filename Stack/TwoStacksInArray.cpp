#include<bits/stdc++.h>
using namespace std;
struct twoStacks
{
	int* arr;
	int top1;
	int top2;
	int cap;
	twoStacks(int c)
	{
		cap=c;
		arr=new int[cap];
		top1=-1;
		top2=cap;
	}
	void push1(int x)
	{
		if(top1<top2-1)
		{
			top1++;
			arr[top1]=x;
		}
		else
		{
			cout<<"Overflow"<<endl;
			return;
		}
	}
	void push2(int x)
	{
		if(top1<top2-1)
		{
			top2--;
			arr[top2]=x;
		}
		else
		{
			cout<<"Overflow"<<endl;
			return;
		}
	}
	int pop1()
	{
		if(top1==-1)
		return 0;
		else
		{
			int data=arr[top1];
			top1--;
			return data;
		}
	}
	int pop2()
	{
	if(top2==cap)
		return 0;
		else
		{
			int data=arr[top2];
			top2++;
			return data;
		}	
	}
};
int main()
{
	twoStacks t(10);
	t.push1(10);
	t.push1(20);
	t.push1(30);
	t.push2(40);
	t.push2(50);
	cout<<t.pop1()<<endl;
	cout<<t.pop2();
}
