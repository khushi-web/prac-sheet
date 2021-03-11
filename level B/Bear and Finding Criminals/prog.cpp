#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,j,n,m,arr[1000000],diff=0,ctr=0;
    cin>>n>>m;
    
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    diff=max(m-1,n-m);
    m--;
    for(i=0;i<=diff;i++)
    {
        
            if(m-i>=0 && m+i<=n-1)
            {
                if(arr[m-i]==1 && arr[m+i]==1 && (m-i)!=(m+i))
                ctr+=2;
                if(arr[m-i]==1 && arr[m+i]==1 && (m-i)==(m+i))
                ctr++;
                
            }
            else if(m-i>=0)
            {
                if(arr[m-i]==1)
                ctr++;
            }
            else if(m+i<n)
            {
                if(arr[m+i]==1)
                ctr++;
            }
        
    }
    cout<<ctr;
    
    
    return 0;
}