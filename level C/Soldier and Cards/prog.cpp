#include<bits/stdc++.h>
using namespace std;
int main()
{
  int i,j,n,m,c1[1000000],c2[1000000],m1,val;
  cin>>n;
  cin>>m;
  for(i=0;i<m;i++)
  cin>>c1[i];
  cin>>m1;
  for(i=0;i<m1;i++)
  cin>>c2[i];
  
  deque<int> s,s1,s2,s3;
  for(i=0;i<m;i++)
  {
      s.push_back(c1[i]);
      s2.push_back(c1[i]);
  }
  for(i=0;i<m1;i++)
  {
    s1.push_back(c2[i]);
    s3.push_back(c2[i]);
  }
  set<deque<int>> set1,set2;
  
  int ctr=0;
  while(1)
  {
      if(s.empty())
      {
          val=2;
          break;
      }
      if(s1.empty())
      {
          val=1;
          break;
      }
      set1.insert(s);
      set2.insert(s1);
      int first=s.front();
      s.pop_front();
      int second=s1.front();
      s1.pop_front();
      if(first>second)
      {
          s.push_back(second);
          s.push_back(first);
      }
      else
      {
          s1.push_back(first);
          s1.push_back(second);
      }
      if(set1.find(s)!=set1.end() && set2.find(s1)!=set2.end())
      {
          val=-1;
          break;
      }
      ctr++;
  }
  if(val==-1)
  cout<<-1;
  else 
  cout<<ctr<<" "<<val;
  return 0;  
}