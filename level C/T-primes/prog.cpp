#include<bits/stdc++.h>
using namespace std;
unordered_map<long long int,long long int> mp;
void SieveOfEratosthenes(long long int n)
{
    
    // Not a prime, else true.
    bool prime[n + 1];
    memset(prime, true, sizeof(prime));
 
    for (long long int p = 2; p * p <= n; p++)
    {
        // If prime[p] is not changed,
        // then it is a prime
        if (prime[p] == true)
        {
       
            for (long long int i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }
 
    // Print all prime numbers
    for (long long int p = 2; p <= n; p++)
       {
           if (prime[p])
        {
            long long int val=p*p;
            mp[val]++;
        }
       }
}
int main()
{
    long long int i,j,n,m;
    SieveOfEratosthenes(1000000);
    cin>>m;
    while(m--)
    {
        cin>>n;
        if(mp[n]!=0)
        cout<<"YES";
        else 
        cout<<"NO";
        cout<<endl;
    }
    return 0;
}