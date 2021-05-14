https://codeforces.com/contest/304/problem/C


#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n,m;
    cin>>n;
    if(n%2==0)
    cout<<-1;
    else 
    {
        for(i=0;i<n;i++)
        cout<<i<<" ";
        cout<<endl;
        for(i=0;i<n;i++)
        cout<<i<<" ";
        cout<<endl;
         for(i=0;i<n;i++)
        cout<<(2*i)%n<<" ";
        cout<<endl;
        
    }
    return 0;
}