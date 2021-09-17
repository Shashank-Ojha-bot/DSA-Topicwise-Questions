#include <bits/stdc++.h>
using namespace std;

int main() {
	long int t=0;
	cin>>t;
	while(t--)
	{
	    int N=0,M=0;
	    int X=0,Y=0;
	    cin>>N>>M>>X>>Y;
	    //cout<<endl;
	    //cin>>X>>Y;
	    int result[N]={0};
	    for(int i=0;i<N;i++)
	    {
	        int cFully=0;
	        int cPartially=0;
	        for(int j=0;j<M;j++)
	        {
	            char a;
	            cin>>a;
	            if(a=='F')
	            cFully++;
	            if(a=='P')
	            cPartially++;
	        }
	        if(cFully==X or (cFully==(X-1) and cPartially==Y))
	        result[i]=1;
	        else
	        result[i]=0;
	    }
	    for(int i=0;i<N;i++)
	    cout<<result[i];
	    cout<<endl;
	}
	return 0;
}

