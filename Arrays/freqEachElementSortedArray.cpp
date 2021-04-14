//Time Complexity: theta(N)

#include<bits/stdc++.h>
using namespace std;
void freqEach(int arr[],int n)
{
	int count=1;
	for(int i=1;i<n;i++)
	{
	if(arr[i]==arr[i-1])	
		{
			count++;
		}
	else {
		cout<<"Count of "<<arr[i-1]<<" is "<<count<<endl;
		count=1;
	}
	}
	cout<<"Count of "<<arr[n-1]<<" is "<<count<<endl;
}
int main()
{
	int arr[]={10,10,10};
	int size=sizeof(arr)/sizeof(arr[0]);
	freqEach(arr,size);
	
}
