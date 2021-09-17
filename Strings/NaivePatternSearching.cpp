#include<bits/stdc++.h>
using namespace std;
void NaivePatternSearching(string text,string pattern)
{
int n=text.length();
int m=pattern.length();
if(m>n)
	return;
for(int i=0;i<=n-m;i++)
{
	for(int j=0;j<m;j++)
	{
		if(pattern[j]!=text[i+j])
		{
			//cout<<"Unmatched"<<endl;
				break;}
				
		if(j==m-1)
		{
			cout<<i<<endl;
		}
	}	
}	
}
int main()
{
	string text="aaaaa";
	string pattern="aaa";
	NaivePatternSearching(text,pattern);
}
