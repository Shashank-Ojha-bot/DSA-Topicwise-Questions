#include<bits/stdc++.h>
using namespace std;
string Sreverse(string a)
{
	static int pos=0;
	static string n="";
	pos++;
	int size=a.length();
	
	cout<<pos<<endl;
	if(pos>a.length())
		return "a";
	n+=a[size-pos]+Sreverse(a);
	return n;
	
}
int main()
{
	string a="aman";
	cout<<Sreverse(a);
}
