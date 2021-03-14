#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,j,n,m,arr[1000000],l,maxm=0,maxm1=0,maxm2=0;
    cin>>n>>l;
    for(i=0;i<n;i++)
    cin>>arr[i];
    sort(arr,arr+n);
    if(arr[0]!=0)
    {
        maxm=max(maxm,arr[0]-0);
    }
    if(arr[n-1]!=l)
    {
        maxm=max(l-arr[n-1],maxm);
    }
    for(i=0;i<n-1;i++)
    {
        maxm1=max(arr[i+1]-arr[i],maxm1);
    }
    
    cout<<fixed<<setprecision(10)<<max(maxm/1.0,maxm1/2.0);
    return 0;
}