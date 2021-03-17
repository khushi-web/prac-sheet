#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,j,n,m,x,y,arr[10000],sum=0,cost;
    cin>>n>>m;
    memset(arr,0,sizeof(arr));
    while(m--)
    {
        cin>>x>>y>>cost;
        arr[x]+=cost*(-1);
        arr[y]+=cost;
    }
    for(i=1;i<=n;i++)
    {
        if(arr[i]<0)
        sum+=abs(arr[i]-0);
    }
    cout<<sum;
    return 0;
}