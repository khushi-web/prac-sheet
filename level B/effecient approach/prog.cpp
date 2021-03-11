#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,j,n,m,arr[1000000],x,vasya=0,petya=0;
    cin>>n;
    unordered_map<int,int> mp;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
        mp[arr[i]]=i;
    }
    cin>>m;
    while(m--)
    {
        cin>>x;
        auto it=mp.find(x);
        vasya+=(it->second+1);
        petya+=(n-it->second);
    }
    cout<<vasya<<" "<<petya;
    
    return 0;
}