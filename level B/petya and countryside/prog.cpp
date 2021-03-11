#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,j,n,m,t,arr[1000000],maxm=0,ctr=0;
    cin>>n;
    for(i=0;i<n;i++)
    cin>>arr[i];
    for(i=0;i<n;i++)
    {
     ctr=0;
        for(j=i+1;j<n;j++)
        {
         if(arr[j]<=arr[j-1])
         ctr++;
         else 
         break;
        }
        for(j=i-1;j>=0;j--)
        {
            if(arr[j]<=arr[j+1])
            ctr++;
            else 
            break;
        }
        maxm=max(maxm,ctr);
    }
    cout<<maxm+1;
    return 0;
}
