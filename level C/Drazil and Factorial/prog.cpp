https://codeforces.com/contest/515/problem/C


#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n,m;
    string str,ans="";
    cin>>n;
    cin>>str;
    for(i=0;i<n;i++)
    {
        if(str[i]=='2' || str[i]=='3' || str[i]=='5' || str[i]=='7')
        ans+=str[i];
        else if(str[i]=='4')
        {
            ans+='3';
            ans+='2';
            ans+='2';
        }
        else if(str[i]=='6')
        {
            ans+='5';
            ans+='3';
        }
        else if(str[i]=='8')
        {
            ans+='7';
            ans+='2';
            ans+='2';
             ans+='2';
        }
         else if(str[i]=='9')
        {
            ans+='7';
            ans+='3';
            ans+='3';
             ans+='2';
        }
    }
    sort(ans.begin(),ans.end());
    reverse(ans.begin(),ans.end());
    cout<<ans;
    return 0;
}