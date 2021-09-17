#include<bits/stdc++.h>
using namespace std;
int leftmostRepeatingChar(string str)
{
	unordered_map<char,int> m;
	for(int i=0;i<str.length();i++)
	{
		m[str[i]]++;
	}
	for(int i=0;i<str.length();i++)
	{
		if(m[str[i]]>1)
		return i;
	}
	return -1;
}
int main()
{
	string str="geeksforgeeks";
	cout<<leftmostRepeatingChar(str);
}
