https://codeforces.com/contest/651/problem/C




#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,j,n,m,x[1000000],y[1000000],a[1000000],b[1000000],ctr=0;
    memset(x,0,sizeof(x));
    memset(y,0,sizeof(y));
   // set<pair<long long int,long long int>> s;
  map<pair<long long int,long long int>,long long int> mp;
unordered_map<long long int,long long int> mp1,mp2;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i]>>b[i];
       // s.insert({a[i],b[i]});
       mp[{a[i],b[i]}]++;
        mp1[a[i]]++;
        mp2[b[i]]++;
    }
    for(i=0;i<n;i++)
    {
        mp1[a[i]]--,mp2[b[i]]--;
        mp[{a[i],b[i]}]--;
        ctr+=mp1[a[i]];
        ctr+=mp2[b[i]];
        if(mp[{a[i],b[i]}]>0)
        ctr-=mp[{a[i],b[i]}];
        
    }
    cout<<ctr;
    return 0;
}