#include <bits/stdc++.h>
using namespace std;

int largestForwardDiagonal(const vector<vector<int>> & M){
    int result = 0;
    if(M.size()==0)
    return 0;
    int row=M.size();
    int column= M[0].size();
    int i=0;
    int j=column-1;
    int maxSum=INT_MIN;
    while(i<row and j>=0)
    {
        int sum=0;
        int rows=i;
        int cols=j;
        sum+=M[rows][cols];
        while(rows && cols)
        {
            rows=rows-1;
            cols=cols-1;
            sum+=M[rows][cols];
        }
        maxSum=max(sum,maxSum);
        if(i==row-1)
        {
            j--;
        }
        else
        {
            i++;
        }
    }
    return maxSum;
    
}


int main(){
    int n, m;
    cin>>n>>m;
    vector<vector<int>>M(n,vector<int>(m));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin>>M[i][j];
        }
    }
    int result = largestForwardDiagonal(M);
    cout<<result;
}

