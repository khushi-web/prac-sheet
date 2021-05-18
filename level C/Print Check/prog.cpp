#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,j,n,m,u,v,k,co,ctr=1;
    unordered_map<long long int,pair<long long int,long long int>> row,col;
    cin>>n>>m>>k;
    long long int mat[n+1][m+1];
    memset(mat,0,sizeof(mat));
    while(k--)
    {
        cin>>u>>v>>co;
        if(u==1)
        {
            row[v-1]=make_pair(co,ctr);
        }
        else
        {
             col[v-1]=make_pair(co,ctr);
        }
        ctr++;
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            pair<long long int,long long int> r,c;
            if(row.find(i)!=row.end())
            r=row[i];
            if(col.find(j)!=col.end())
            c=col[j];
            if(r.second>c.second)
            mat[i][j]=r.first;
            else
            mat[i][j]=c.first;
            
        }
    }
       for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            cout<<mat[i][j]<<" ";
            
        }
        cout<<endl;
    }
    return 0;
}