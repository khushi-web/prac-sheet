#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n,m,flag=0;
    string str,str1;
    cin>>str;
    cin>>str1;
    n=str.length();
    m=str1.length();
    if(n>m)
    cout<<n;
    else if(m>n)
    cout<<m;
    else 
    {
        for(i=0;i<n;i++)
        {
            if(str[i]==str1[i])
            flag++;
        }
        if(flag==n)
        cout<<-1;
        else 
        cout<<n;
    }
    return 0;
    
}