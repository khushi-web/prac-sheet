#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n,arr[1000000],last,first,ctr=0;
    cin>>n;
    for(i=0;i<n;i++)
    cin>>arr[i];
    sort(arr,arr+n);
   
    
    first=arr[0];
    last=arr[n-1];
    for(i=0;i<n;i++)
    {
        if(arr[i]==first)
        ctr++;
    }
    if(ctr==n)
    cout<<0;
    else 
    {
        for(i=0;i<n;i++)
        {
            if(arr[i]==last)
            ctr++;
        }
        cout<<(n-ctr);
    }
   
    
    return 0;
}