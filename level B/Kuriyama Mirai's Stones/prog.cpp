#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,j,n,m,t,q,arr1[1000000],arr[1000000],type,l,r;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>arr1[i];
        arr[i]=arr1[i];
    }
    sort(arr,arr+n+1);
    arr[0]=0;
    for(i=2;i<=n;i++)
    arr[i]=arr[i]+arr[i-1];
    arr1[0]=0;
    for(i=2;i<=n;i++)
    arr1[i]=arr1[i]+arr1[i-1];
    cin>>q;
    while(q--)
    {
        cin>>type>>l>>r;
        if(type==1)
        {
            cout<<arr1[r]-arr1[l-1];
        }
        else
        {
            cout<<arr[r]-arr[l-1];
        }
        cout<<endl;
    }
    return 0;
    
}