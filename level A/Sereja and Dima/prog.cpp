#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,j,n,m,arr[1000000],s=0,d=0,ctr=0,chance=0;
    cin>>n;
    for(i=0;i<n;i++)
    cin>>arr[i];
    
    i=0;j=n-1;
  while(chance<n)
  {
      if(chance%2==0)
      {
          if(arr[i]>arr[j])
          {
              s+=arr[i];
              i++;
          }
          else 
          {
              s+=arr[j];
              j--;
          }
          chance++;
      }
      else 
      {
           if(arr[i]>arr[j])
          {
              d+=arr[i];
              i++;
          }
          else 
          {
              d+=arr[j];
              j--;
          }
          chance++;
      }
      
  }
  cout<<s<<" "<<d;
  return 0;
    
    
}