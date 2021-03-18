#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n,m,flag=0,flag1=0;
    char ch,ch1,matrix[1000][1000];
    cin>>n;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        cin>>matrix[i][j];
    }
    ch=matrix[0][0];
    ch1=matrix[1][0];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j || i+j==n-1)
            {
                if(matrix[i][j]!=ch)
                flag=1;
            }
            else 
            {
                if(matrix[i][j]!=ch1)
                flag1=1;
            }
        }
    }
    if(flag==1 || flag1==1 || ch==ch1)
    cout<<"NO";
    else 
    cout<<"YES";
}