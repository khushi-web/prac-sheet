#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,ctr=0,arr[6][6],p,q,n,m;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        cin>>arr[i][j];
    }
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(arr[i][j]==1)
            {
                p=i;
                q=j;
            }
        }
    }
    n=abs(3-p);
    m=abs(3-q);
    
    cout<<(m+n);
    return 0;
}