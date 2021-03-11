#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n;
    string str,str1="ROYGBIV";
    cin>>n;
    if(n%7==0)
    {
        n=n/7;
        for(i=0;i<n;i++)
        str+=str1;
    }
    else if(n%7==1)
    {
        n=n/7;
        for(i=0;i<n;i++)
        str+=str1;
        str+='G';
    }
    else if(n%7==2)
    {
        n=n/7;
        for(i=0;i<n;i++)
        str+=str1;
        str+='G';
        str+='B';
    }
    else if(n%7==3)
    {
        n=n/7;
        for(i=0;i<n;i++)
        str+=str1;
        str+='G';
        str+='B';
        str+='I';
    }
    else if(n%7==4)
    {
        n=n/7;
        for(i=0;i<n;i++)
        str+=str1;
        str+='G';
        str+='B';
        str+='I';
        str+='V';
    }
    else if(n%7==5)
    {
        n=n/7;
        for(i=0;i<n;i++)
        str+=str1;
        str+='G';
        str+='B';
        str+='I';
        str+='V';
        str+='G';
    }
    else if(n%7==6)
    {
        n=n/7;
        for(i=0;i<n;i++)
        str+=str1;
        str+='G';
        str+='B';
        str+='I';
        str+='V';
        str+='G';
        str+='B';
    }
    cout<<str;
    return 0;
}