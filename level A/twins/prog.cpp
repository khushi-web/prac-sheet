#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,j,n,m,arr[1000000],sum=0,ctr=0,sum1=0;
    cin>>n;
    for(i=0;i<n;i++)
    cin>>arr[i];
    sort(arr,arr+n);
    for(i=0;i<n;i++)
    sum+=arr[i];
    for(i=n-1;i>=0;i--)
    {
        sum1+=arr[i];
        ctr++;
        if(sum1>sum-sum1)
        break;
    }
    cout<<ctr;
    return 0;
}