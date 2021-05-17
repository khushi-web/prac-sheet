#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,j,n,m,a,b,c,ctr=0,maxm=1,val;
    cin>>n>>a>>b>>c;
    for(i=0;i<=4000;i++)
    {
        for(j=0;j<=4000;j++)
        {
            ctr=0;
            val=n-(i*a)-(j*b);
            if(val<0)
            continue;
            if(val%c==0)
            {
                val=val/c;
                ctr+=(i+j+val);
                maxm=max(maxm,ctr);
            }
        }
    }
    cout<<maxm;
    return 0;
}