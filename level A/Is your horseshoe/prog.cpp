#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,a,b,c,d,num[4],ctr=0,ctr1=0,j;
    cin>>a>>b>>c>>d;
    num[0]=a;
    num[1]=b;
    num[2]=c;
    num[3]=d;
    sort(num,num+4);
    for(i=0;i<3;i++)
    {
        if(num[i]==num[i+1])
        ctr++;
    }
    if(ctr>=1)
    cout<<ctr;
    else 
    cout<<0;
    return 0;
    
}