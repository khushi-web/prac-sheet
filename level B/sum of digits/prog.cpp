#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    int i,j,n,m=0,sum=0;
    cin>>str;
    while(str.length()!=1)
    {
        for(i=0;i<str.length();i++)
        {
            sum+=(str[i]-'0');
        }
        str.clear();
        while(sum!=0)
        {
          str+=('0'+(sum%10));
          sum=sum/10;
        }
        
        m++;
        sum=0;
    }
    cout<<m;
    return 0;
}