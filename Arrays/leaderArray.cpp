//TimeComplexity: theta(N)

#include<bits/stdc++.h>
using namespace std;
void leaders(int arr[],int n)
{
	int curr_leader=arr[n-1];
	cout<<curr_leader<<endl;
for(int i=n-2;i>=0;i--)
{
if(arr[i]>curr_leader)
{
	curr_leader=arr[i];
	cout<<curr_leader<<endl;
	}	
}	
}
int main()
{
	int arr[]={1,2,10,7,6,1,4};
	int size=sizeof(arr)/sizeof(arr[0]);
	leaders(arr,size);
}
