#include<bits/stdc++.h>
using namespace std;
int trappingRain(int arr[],int n)
{
	int waterStored=0;
	bool Sorted=false;
	//int j=0;
for(int i=1;i<n;i++)
{
if(arr[i]-arr[i-1]<0)
{
	//cout<<arr[i]<<arr[i-1]<<endl;
	waterStored+=abs(arr[i]-arr[i-1]);
	arr[i]+=abs(arr[i]-arr[i-1]);
	//cout<<arr[i]<<endl;
	
	//cout<<waterStored<<endl;
}
else
Sorted=true;	
}
return (Sorted?waterStored:0);	
}
int main()
{
	int arr[]={3,0,1,2,5};
	int size=sizeof(arr)/sizeof(arr[0]);
	cout<<trappingRain(arr,size);
}
