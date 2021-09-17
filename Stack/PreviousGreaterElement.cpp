#include<bits/stdc++.h>
using namespace std;
vector<int> previousGreaterElement(int arr[],int size)
{
	int maxTillNow=INT_MIN;
	vector<int> v(size);
	for(int i=0;i<size;i++)
	{
		if(arr[i]>=maxTillNow)
			v[i]=-1;
		else
			{
				int j=i-1;
				bool flag=false;
				while(arr[j]!=maxTillNow)
				{
					if(arr[j]>arr[i])
					{
						v[i]=arr[j];
						flag=true;
						break;
					}
					j--;
				}
				if(flag==false)
				{
					v[i]=maxTillNow;	
				}
			}
		maxTillNow=max(maxTillNow,arr[i]);
	}
	return v;
}
int main()
{
	vector<int> v;
	int arr[]={20,30,10,5,15};
	int n=sizeof(arr)/sizeof(arr[0]);
	v=previousGreaterElement(arr,n);
	for(int i=0;i<n;i++)
	{
		cout<<v[i]<<" ";
	}
}
