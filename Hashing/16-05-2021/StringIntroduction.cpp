#include<bits/stdc++.h>
using namespace std;
int main()
{
	char str[]="gfg";
	cout<<sizeof(str)<<endl;   //op: 4 because there is an extra /0 at the end of the str array.
	char str1[]={'g','f','g'};
	cout<<str1;
}
