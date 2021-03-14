#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,j,n,m,k,arr[1000000],l,r,minm=INT_MAX,p;
    cin>>n>>k;
    for(i=1;i<=n;i++)
    cin>>arr[i];
    arr[0]=0;
    for(i=2;i<=n;i++)
    arr[i]=arr[i]+arr[i-1];
    l=1,r=k;
    
    while(r<=n)
    {
        if(arr[r]-arr[l-1]<minm)
        {
            minm=arr[r]-arr[l-1];
            p=l;
        }
        l++;
        r++;
    }
    cout<<p;
    return 0;
    
}