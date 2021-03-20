#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,j,n,m;
    cin>>n>>m;
    
        for(i=1;i<=10;i++)
        {
            j=i*n;
            if(j%10==m || j%10==0)
            {
                cout<<i;
                break;
            }
        }
    return 0;
}