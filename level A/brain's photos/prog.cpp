#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n,m;
    char matrix[1001][1001];
    int flag1=0,flag2=0,flag3=0;
    cin>>n>>m;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        cin>>matrix[i][j];
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(matrix[i][j]=='C')
            {
                flag1=1;
                break;
            }
             if(matrix[i][j]=='M')
            {
                flag2=1;
                break;
            }
             if(matrix[i][j]=='Y')
            {
                flag3=1;
                break;
            }
        }
        if(flag1==1 || flag2==1 || flag3==1)
        break;
    }
    if(flag1==1 || flag2==1 || flag3==1)
    cout<<"#Color";
    else 
    cout<<"#Black&White";
    
    
    return 0;
}