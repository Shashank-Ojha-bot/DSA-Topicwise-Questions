#include<bits/stdc++.h>
using namespace std;
vector<string> permutations(string a,int l,int r)
{
	static vector<string> v;
	if(l==r)
		v.push_back(a);
	for(int i=l;i<=r;i++)
	{
		swap(a[l],a[i]);
		permutations(a,l+1,r);
		swap(a[l],a[i]);   //to restore to the initial value
	}
	return v;
}
int main()
{
	string a="abc";
	int n=a.length();
	vector<string> perm=permutations(a,0,n-1);
	for(auto i:perm)
	{
		cout<<i<<" ";
	}
}
