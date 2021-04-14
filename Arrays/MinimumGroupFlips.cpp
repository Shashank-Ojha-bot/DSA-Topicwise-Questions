#include<bits/stdc++.h>
using namespace std;
int minGroupFlips(int arr[],int n)
{
	int zeroGroups=0;
	int oneGroups=0;
	if(arr[0]==1)
	oneGroups++;
	else
	zeroGroups++;
	for(int i=1;i<n;i++)
	{
		if(arr[i]==1)
		{
			if(arr[i-1]!=1)
			oneGroups++;
		}
		else
		{
			if(arr[i-1]!=0)
			zeroGroups++;
		}
	}
	//cout<<"No of zero groups"<<zeroGroups<<endl;
	//cout<<"No of one groups"<<oneGroups<<endl;
//	vector<int> startIndex;
//	vector<int> endIndex;
	int groupFind;
	if(oneGroups<=zeroGroups)
	groupFind=1;
	else
	groupFind=0;
	//cout<<"We are finding "<<groupFind<<endl;
	bool cons=false;
	for(int i=0;i<n;i++)
	{
		//cout<<"inside"<<endl;
		if(arr[i]==groupFind and cons==false)
		{
			//cout<<"Hello"<<endl;
			//startIndex.push_back(i);
			cout<<"From "<<i<<" to ";
			cons=true;
		}
		else if(arr[i]!=groupFind)
		{
			if(i!=0)
			{
			if(arr[i-1]==groupFind)
			{
				//cout<<"Hi"<<endl;
				//endIndex.push_back(i-1);
				cout<<i-1<<endl;
				cons=false;
			}}
		}
		//cout<<"outside"<<endl;
	}
	if(arr[n-1]==groupFind)
	//endIndex.push_back(n-1);
	cout<<n-1<<endl;
//	for(int i=0;i<startIndex.size();i++)
//	{
//		cout<<"From "<<startIndex[i]<<" to "<<endIndex[i]<<endl;
//	}
}
int main()
{
	int arr[]={1,0,0,0,1,0,0,1,1,1,1,0};
	int size=sizeof(arr)/sizeof(arr[0]);
	minGroupFlips(arr,size);
}
