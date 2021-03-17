#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,j,n,m,arr[1000000],k,ctr=0,sum=0,minm=INT_MAX;
    cin>>n>>k;
    for(i=0;i<n;i++)
    cin>>arr[i];
    sort(arr,arr+n);
    for(i=0;i<n;i++)
    {
    if(arr[i]<0)
    ctr++;
    }
    if(ctr>=k)
    {
        for(i=0;i<k;i++)
        {
            arr[i]=arr[i]*(-1);
        }
        for(i=0;i<n;i++)
        sum+=arr[i];
        cout<<sum;
    }
    else 
    {
        k=k-ctr;
        if(k%2==0)
        {
            for(i=0;i<n;i++)
            sum+=abs(arr[i]-0);
            cout<<sum;
        }
        else 
        {
            for(i=0;i<n;i++)
            {
                sum+=abs(arr[i]-0);
                minm=min(minm,abs(arr[i]-0));
            }
            sum=sum-2*minm;
            cout<<sum;
        }
    }
    
    return 0;
}