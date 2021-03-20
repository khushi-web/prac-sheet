#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n,m,matrix[1001][1001],count=0,ctr=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        for(j=0;j<3;j++)
        cin>>matrix[i][j];
    }
    for(i=0;i<n;i++)
    {
        
        for(j=1;j<3;j++)
        {
            matrix[i][j]=matrix[i][j]+matrix[i][j-1];
        }
        if(matrix[i][2]>=2)
        ctr++;
    }
    cout<<ctr;
    return 0;
}