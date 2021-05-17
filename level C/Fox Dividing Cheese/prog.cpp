#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,j,n,m,ctr=0,a,b;
   // cin>>n>>m;
   cin>>a>>b;
   n=__gcd(a,b);
   a=a/n;
   b=b/n;
   while(a!=1)
   {
       if(a%2==0)
       a=a/2;
       else if(a%3==0)
       a=a/3;
       else if(a%5==0)
       a=a/5;
       else
       break;
       ctr++;
   }
    while(b!=1)
   {
       if(b%2==0)
       b=b/2;
       else if(b%3==0)
       b=b/3;
       else if(b%5==0)
       b=b/5;
       else
       break;
       ctr++;
   }
   if(a!=1 || b!=1)
   cout<<-1;
   else 
   cout<<ctr;
   
   
    return 0;
}