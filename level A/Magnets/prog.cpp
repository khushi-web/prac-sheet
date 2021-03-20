#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n,a[1000000],k,ctr=1;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>k;
        a[i]=k;
    }
    for(i=0;i<n-1;i++)
    {
        if(a[i]!=a[i+1])
        ctr++;
    }
    cout<<ctr;
    return 0;
}