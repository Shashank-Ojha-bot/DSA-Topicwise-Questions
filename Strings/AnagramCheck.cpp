#include<bits/stdc++.h>
using namespace std;

//Time complexity: O(n+CHAR) where CHAR=256
//Space complexity: O(CHAR)

bool AnagramCheck(string str1,string str2)
{
	const int CHAR=256;
	if(str1.length()!=str2.length())
	return false;
	int count[CHAR]={0};
	for(int i=0;i<str1.length();i++)
	{
		count[str1[i]]++;
		count[str2[i]]--;
	}
	for(int i=0;i<CHAR;i++)
	{
		if(count[i]!=0)
		return false;
	}
	return true;
}


//bool AnagramCheck(string str1,string str2)
//{
//	unordered_map<char,int> m;
//	for(int i=0;i<str1.length();i++)
//	{
//		m[str1[i]]++;
//	}
//	for(int i=0;i<str2.length();i++)
//	{
//		if(m.find(str2[i])==m.end())
//			return false;
//		if(m.find(str2[i])!=m.end())
//		{
//			if(m.find(str2[i])->second>1)
//				m.find(str2[i])->second--;
//			else
//				m.erase(str2[i]);
//		}
//	}
//	return true;
//}
int main()
{
	string str1="listen";
	string str2="silent";
	cout<<AnagramCheck(str1,str2);
}
