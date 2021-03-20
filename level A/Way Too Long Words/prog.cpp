#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{
    int i,n,t;
    char str[10000];
    cin>>t;
    for(i=0;i<t;i++)
    {
    cin>>str;
    n=strlen(str);
    if(n<=10)
    cout<<str;
    else
    {
        cout<<str[0]<<(n-2)<<str[n-1];
    }
    cout<<"\n";
    }
    return 0;
}