#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n;
    char ch,str[1000000],str1[31]={"qwertyuiopasdfghjkl;zxcvbnm,./"};
    cin>>ch;
    cin>>str;
    for(i=0;str[i]!='\0';i++)
    {
        for(j=0;j<31;j++)
        {
            if(str[i]==str1[j])
            {
                if(ch=='R')
                {cout<<str1[j-1];
                break;}
                        else 
            {
                cout<<str1[j+1];
                break;
            }
            }
        }
    }
    return 0;
}