#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,j,n,a1,a2,a3,a4,sum=0;
    cin>>a1>>a2>>a3>>a4;
    string str;
    cin>>str;
    for(i=0;i<str.length();i++)
    {
        if(str[i]=='1')
        sum+=a1;
        if(str[i]=='2')
        sum+=a2;
        if(str[i]=='3')
        sum+=a3;
        if(str[i]=='4')
        sum+=a4;
    }
    cout<<sum;
    return 0;
}