#include <bits/stdc++.h>
using namespace std;
int x,l;
int main()
{
    string s;
    cin>>s;
    for(int i=0;s[i];i++) {l=(s.substr(i)).find("bear");if(l!=-1)x+=s.size()-(i+3+l);}
    cout<<x;
}