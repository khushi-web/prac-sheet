#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n,m,k,t,a,b,u,v,cells,ctr=0;
    vector<pair<int,int>> vect;
    cin>>n>>m>>k>>t;
    for(j=0;j<k;j++)
    {
        cin>>u>>v;
        vect.push_back(make_pair(u,v));
    }
    for(j=0;j<t;j++)
    {
        ctr=0;
        int flag=0;
        cin>>a>>b;
        cells=(a-1)*m+(b-1);
        for(i=0;i<vect.size();i++)
        {
            if(vect[i].first<a)
            ctr++;
            if(vect[i].first==a)
            {
                if(vect[i].second<b)
                ctr++;
                else if(vect[i].second==b)
                {
                    flag=1;
                    break;
                }
            }
        }
        if(flag==1)
        cout<<"Waste";
        else if((cells-ctr)%3==0)
        cout<<"Carrots";
        else if((cells-ctr)%3==1)
        cout<<"Kiwis";
        else 
        cout<<"Grapes";
        cout<<"\n";
    }
   return 0; 
}