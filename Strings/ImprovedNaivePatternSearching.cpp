/* Naive Pattern searching can be improved to have a time complexity of O(n) instead of O((n-m+1)*m) when
all the characters of the pattern are distinct */

#include<bits/stdc++.h>
using namespace std;
void NaivePatternSearching(string text,string pattern)
{
int n=text.length();
int m=pattern.length();
if(m>n)
	return;
for(int i=0;i<=n-m)
{
	int j;
	for(j=0;j<m;j++)
		if(pattern[j]!=text[i+j])
			break;
	if(j==m)
		cout<<i<<endl;
	if(j==0)       //If first character does not match then increment in normal way
		i++;
	else           //else if some characters are matching then increment by the number of characters 
		i=i+j;     //that matched because all characters of pattern are different
}	
}	

int main()
{
	string text="abcabcd";
	string pattern="abcd";
	NaivePatternSearching(text,pattern);
}
