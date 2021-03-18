#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,j,n,k;
    cin>>n>>k;
    if(n%2==0)
    {
        if(k>(n/2))
        {
            k=k-(n/2);
            cout<<2+(k-1)*2;
        }
        else 
        cout<<1+(k-1)*2;
    }
    else 
    {
         if(k>(n/2)+1)
        {
            k=k-((n/2)+1);
            cout<<2+(k-1)*2;
        }
        else 
        cout<<1+(k-1)*2;
    }
    
    
    return 0;
}