#include<bits/stdc++.h>
using namespace std;
void LPS(string str)
{
	int n=str.length();
	int lps[n];
	lps[0]=0;
	int i=1;
	int len=0;
	while(i<n)
	{
		if(str[i]==str[len])
		{
			len++;
			lps[i]=len;
			i++;
		}
		else
		{
			if(len==0)
			{
				lps[i]=0;
				i++;
			}
			else
			{
				len=lps[len-1];
			}
		}
	}
	for(int i=0;i<n;i++)
	{
		cout<<lps[i]<<" ";
	}
}
int main()
{
	string str="aaaa";
	LPS(str);
}
