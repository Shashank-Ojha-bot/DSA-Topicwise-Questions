#include<bits/stdc++.h>
using namespace std;
void RabinKarpPatternMatching(string text,string pattern)
{
	int n=text.length();
	int m=pattern.length();
	if(m>n)
		return;
	int p=0;
	int hash=0;
	for(int i=0;i<m;i++)
	{
		p+=pattern[i];
		hash+=text[i];
	}
	for(int i=0;i<=n-m;i++)
	{
		if(i!=0)
			hash=hash-text[i-1]+text[i+m-1];
		if(hash!=p)
		{
			
			continue;
		}
		int j;
		for(j=0;j<m;j++)
		{
			if(pattern[j]!=text[i+j])
			break;
		}
		if(j==m)
			cout<<i<<endl;
		
	}
}
int main()
{
	string text="abcd";
	string pattern="xyz";
	RabinKarpPatternMatching(text,pattern);
}
