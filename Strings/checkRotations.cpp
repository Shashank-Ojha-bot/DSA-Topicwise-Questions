#include<bits/stdc++.h>
using namespace std;
int areRotations(string str1,string str2)
{
	if(str1.length()!=str2.length())
	return false;
	else
	return (str1+str1).find(str2)!=string::npos;
}
int main()
{
	string str1="abab";
	string str2="abba";
	cout<<areRotations(str1,str2);
}
