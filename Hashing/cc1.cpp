#include <iostream>
#define ll long long
using namespace std;

int main() {
	ll t=0;
	cin>>t;
	while(t--)
	{
	    ll N=0,M=0;
	    cin>>N>>M;
	    ll x=0,y=0;
	    cin>>x>>y;
	    ll a=0,b=0;
	    cin>>a>>b;
	    ll theifReqTime=(N-x)+(M-y);
	    ll policeReqTime=(N-a)+(M-b)-min(N-a,M-b);
	    if(theifReqTime>policeReqTime)
	    cout<<"NO";
	    else
	    cout<<"YES";
	    cout<<endl;
	}
	return 0;
}

