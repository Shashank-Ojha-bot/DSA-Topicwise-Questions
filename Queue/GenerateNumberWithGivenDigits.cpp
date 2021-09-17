#include<bits/stdc++.h>
using namespace std;
void GenerateNumberWithGivenDigits(int n)
{
	queue<string> q;
	q.push("5");
	q.push("6");
	for(int i=0;i<n;i++)
	{
		string a=q.front();
		cout<<a<<" ";
		q.pop();
		q.push(a+"5");
		q.push(a+"6");
	}
}
int main()
{
	int n;
	cout<<"Enter the number of numbers with digits as 5 and/or 6 only"<<endl;
	cin>>n;
	GenerateNumberWithGivenDigits(n);
}
