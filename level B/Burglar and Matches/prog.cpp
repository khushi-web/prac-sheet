#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,j,n,m,t,x,y,sum=0;
    cin>>n>>m;
    vector<pair<long long int,long long int>> vect;
    while(m--)
    {
        cin>>x>>y;
        vect.push_back({y,x});
    }
    sort(vect.begin(),vect.end());
    for(i=vect.size()-1;i>=0;i--)
    {
        if(vect[i].second<=n)
        {
            sum+=(vect[i].second*vect[i].first);
            n-=vect[i].second;
        }
        else 
        {
            sum+=(vect[i].first*n);
            n=0;
            break;
        }
    }
    cout<<sum;
    return 0;
}