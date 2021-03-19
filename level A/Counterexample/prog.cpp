#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,j,n,m,a,b;
    cin>>a>>b;
    if(a==1)
    {
        if(b>3)
        cout<<2<<" "<<3<<" "<<4;
        else
        cout<<-1;
    }
    else
    {
        if(b-a<2)
        cout<<-1;
        else if(a%2==0)
        cout<<a<<" "<<a+1<<" "<<a+2;
        else
        {
            if(b-a<=2)
            cout<<-1;
            else
            cout<<a+1<<" "<<a+2<<" "<<a+3;
        }
    }
    return 0;
}