#include<bits/stdc++.h>
using namespace std;
void reverse(string &s,int start,int end)
{
	while(start<=end)
	{
		char c=s[start];
		s[start]=s[end];
		s[end]=c;
		start++;
		end--;
	}
}
string rotation(string &s)
{
	int start=0;
	for(int end=0;end<s.length();end++)
	{
		if(s[end]==' ')
		{
		reverse(s,start,end-1);
		start=end+1;	
		}
	}
	reverse(s,start,s.length()-1);
	reverse(s,0,s.length()-1);
	return s;
}
int main()
{
	string  s="sky is blue";
	cout<<rotation(s);
}
