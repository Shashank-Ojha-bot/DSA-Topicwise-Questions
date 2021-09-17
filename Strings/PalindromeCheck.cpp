#include<bits/stdc++.h>
using namespace std;

//Time : theta(N)
//Space : theta(N)
 
//int checkPalindrome(string str)
//{
//	string rev;
//	for(int i=str.length()-1;i>=0;i--)
//	rev+=str[i];
//	if(rev==str)
//	return 1;
//	else
//	return 0;
//}


//Time: O(N)
//Space : O(1)
int checkPalindrome(string str)
{
	int start=0;
	int end=str.length()-1;
	while(start<=end)
	{
		if(str[start]!=str[end])
		return 0;
		start++;
		end--;
	}
	return 1;
}
int main()
{
	string str="abcb";
	cout<<checkPalindrome(str);
}


