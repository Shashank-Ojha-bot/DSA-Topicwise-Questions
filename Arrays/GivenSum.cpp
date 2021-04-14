#include<bits/stdc++.h>
using namespace std;
int SubarrayGivenSum(int arr[],int n,int k)
{
	int Sum=arr[0];
	int b=0;
	cout<<n<<endl;
	for(int i=1;i<=n;i++)
	{
		cout<<"Start"<<endl;
		if(Sum==k)
			return 1;
		else if(Sum<k)
			{cout<<"Once"<<endl;
			Sum+=arr[i];}
		else
		{
			cout<<"twice"<<endl;
			while(Sum>k)
			{
				cout<<"In"<<endl;
				Sum=Sum-arr[b];
				b++;
			}
		}
		cout<<i<<endl;
	}
	return 0;
}

int main()
{
	int arr[]={18,1,5,3};
	int size=sizeof(arr)/sizeof(arr[0]);
	int given=3;
	cout<<SubarrayGivenSum(arr,size,given);
	
}
