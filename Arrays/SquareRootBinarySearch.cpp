#include<bits/stdc++.h>
using namespace std;
int sqaureRootBinarySearch(int x)
{
	int low=1;
	int high=x;
	int ans=-1;
	while(low<=high)
	{
	int mid=(low+high)/2;
	int mq=mid*mid;	
	if(mq==x)
	return mid;
	else if(mq>x)
	high=mid-1;
	else
	{
		low=mid+1;
		ans=mid;
	}
	}
	return ans;
}
int main()
{
	cout<<sqaureRootBinarySearch(24);
}

