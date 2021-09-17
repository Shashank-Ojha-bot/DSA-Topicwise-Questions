#include<bits/stdc++.h>
using namespace std;
int checkSubsequence(string str1,string str2)
{
	int i=0;
	int j=0;
	while(i<str1.length() and j<str2.length())
	{
		if(str1[i]==str2[j])
		{
			i++;
			j++;
		}
		else
		i++;
	}
	if(j!=str2.length())
	return 0;
	else
	return 1;
}
int main()
{
string str1="abcdef";
string str2="ade";
cout<<checkSubsequence(str1,str2);	
}

