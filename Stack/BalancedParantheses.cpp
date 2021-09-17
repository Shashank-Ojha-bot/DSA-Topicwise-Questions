#include<bits/stdc++.h>
using namespace std;
bool balancedParanthesis(string a)
{
	stack<char> s;
	if(a.length()==0)
	return false;
	for(int i=0;i<a.length();i++)
	{
		if(a[i]=='(' or a[i]=='[' or a[i]=='{')
		s.push(a[i]);
		else if(a[i]==')' or a[i]==']' or a[i]=='}')
		{
			if(s.empty())
			return false;
			if(a[i]==')' and (s.top()=='('))
			s.pop();
			else if(a[i]==']' and (s.top()=='['))
			s.pop();
			else if(a[i]=='}' and (s.top()=='{'))
			s.pop();
			else
			return false;
		}
	}
	if(s.size())
	return false;
	return true;
}
int main()
{
string a="(()))";
cout<<balancedParanthesis(a);
}
