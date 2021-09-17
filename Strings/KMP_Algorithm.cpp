#include<bits/stdc++.h>
using namespace std;
int* fillLPS(string pattern)
{
	//int n=text.length();
	int m=pattern.length();
	int* lps=(int*)malloc(sizeof(int)*m);   	//dynamically allocated array to return the array
	lps[0]=0;                                   //without worrying about the lifetime of the variable.
	int i=1;
	int len=0;
	while(i<m)
	{
		if(pattern[i]==pattern[len])
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
//	for(int i=0;i<m;i++)
//	{
//		cout<<lps[i]<<endl;
//	}
	return lps;
}
void KMP(string text,string pattern)
{
	int n=text.length();
	int m=pattern.length();
	int* lps;
	lps=fillLPS(pattern);
//	cout<<"In main"<<endl;
//	for(int i=0;i<m;i++)
//	{
//		cout<<*(lps+i)<<endl;
//	}
	int i=0;
	int j=0;
	while(i<n)
	{
		if(text[i]==pattern[j])
		{
			i++;
			j++;
		}
		if(j==m)
		{
			cout<<i-m<<endl;
			j=lps[j-1];
		}
		else if(i<n and text[i]!=pattern[j])
		{
			if(j==0)
			i++;
			else
			{
				j=lps[j-1];
			}
		}
	}
	free(lps);
	
}
int main()
{
	string text="abcdefg";
	string pattern="bcd";
	KMP(text,pattern);
}
