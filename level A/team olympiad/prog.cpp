#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,j,n,m,arr[1000000],ctr1=0,ctr2=0,ctr3=0;
    vector<long long int> adj[1000000];
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
        adj[arr[i]].push_back(i+1);
        if(arr[i]==1)
        ctr1++;
        else if(arr[i]==2)
        ctr2++;
        else 
        ctr3++;
    }
    m=min(ctr1,min(ctr2,ctr3));
    cout<<m<<endl;
    for(i=0;i<m;i++)
    {
        cout<<adj[1][i]<<" "<<adj[2][i]<<" "<<adj[3][i]<<endl;
    }
    
    return 0;
}