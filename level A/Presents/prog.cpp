#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,j,arr[1000000],arr1[1000000],n;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>arr[i];
        arr1[arr[i]]=i;
    }
    for(i=1;i<=n;i++)
    cout<<arr1[i]<<" ";
    return 0;
    
}