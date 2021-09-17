#include<bits/stdc++.h>
using namespace std;
void freq(int arr[],int n)
{
	unordered_map<int,int> m;
	for(int i=0;i<n;i++)
	{
		m[arr[i]]++;	
	}
	for(auto i:m)
	{
		cout<<"Frequency of "<<i.first<<" is "<<i.second<<endl;
	}	
}


//Frequency in same order as in array
void freqOrder(int arr[],int n)
{
	unordered_map<int,int> m;
	for(int i=0;i<n;i++)
	m[arr[i]]++;
	for(int i=0;i<n;i++)
	{
		unordered_map<int,int>::iterator itr;
		itr=m.find(arr[i]);         //find() returns an iterator at the position whereas count() returns 1/0
		if(itr->second!=-1)
		cout<<"Frequency of "<<itr->first<<" is "<<itr->second<<endl;
		itr->second=-1;
	}
}
int main()
{
	int arr[]={10,12,10,15,10,20,12,12};
	int size=sizeof(arr)/sizeof(arr[0]);
	//freq(arr,size);
	freqOrder(arr,size);
}
