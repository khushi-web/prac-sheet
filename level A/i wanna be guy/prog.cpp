#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n,m,arr[1000000],arr1[1000000],p;
    set<int> s;
    cin>>p;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
        s.insert(arr[i]);
    }
    cin>>m;
    for(i=0;i<m;i++)
    {
        cin>>arr1[i];
        s.insert(arr1[i]);
    }
    if(s.size()==p)
    cout<<"I become the guy.";
    else
    cout<<"Oh, my keyboard!";
}