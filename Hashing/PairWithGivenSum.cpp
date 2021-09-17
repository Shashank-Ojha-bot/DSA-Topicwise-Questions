//Pair with a given sum is very easy to find if we have a sorted array : We can follow the two pointer appraoch
//by taling one pointer on the 1st element and another pointer on the last element.

#include<bits/stdc++.h>
using namespace std;
//Naive appraoch : O(n^2)
void givenSum(int arr[],int n,int given)
{
	for(int i=0;i<n;i++)
	{
		int a=arr[i];
		for(int j=i+1;j<n;j++)
		{
			if((given-a)==arr[j])
			{
			cout<<"Yes"<<endl;
			cout<<a<<" "<<arr[j]<<endl;
			return;}
		}
	}
	cout<<"No"<<endl;
}
//Efficient soln

//First Check that if givenSum-arr[i] is present in the set or not.If not then insert arr[i] into the set. 	
//DONT INSERT ALL THE VALUES IN THE SET AND THEN CHECK FOR GIVEN-ARR[I] CONDITION, IT IS WRONG APPROACH.
int GivenSum(int arr[],int n,int given)
{
unordered_set<int> s;
for(int i=0;i<n;i++)
{
	if(s.find(given-arr[i])!=s.end())
		return true;
	else
		s.insert(arr[i]);	
}
return false;	
}
int main()
{
	int arr[]={2,1,6,3};
	int size=sizeof(arr)/sizeof(arr[0]);
	int summ=6;
	givenSum(arr,size,summ);
	cout<<GivenSum(arr,size,summ);
	
}
