#include <bits/stdc++.h>
 
using namespace std;
typedef long long int ll;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
typedef pair <ll,ll> pii;
#define all(vec) vec.begin(),vec.end()
#define vi vector<int>
#define vp vector<pair<int,int>>
#define mk make_pair
#define vvi vector<vector<int>>
#define vvii vector<vector<pair<int, int>>>
#define vvl vector<vector<ll>>
#define vvll vector<vector<pair<ll, ll>>>
#define epsilon 1e-9
#define INF 3e18 + 5
#define ff first
#define ss second
#define pi 3.141592653589
#define inf 4e18
#define MOD 1000000007
#define pb push_back
#define FOR(x, N) for(x = 0; x < N; ++x)
#define for1(low,high,k) for(int i=low;i<high;i+=k)
#define for2(low,high,k) for(int j=low;j<high;j+=k)
#define rev(high,low,k) for(int i=high;i>=low;i-=k)
template<typename T> T getint() {
	T val=0;
	char c;
	bool neg=false;
	while((c=getchar()) && !(c>='0' && c<='9')) {
		neg|=c=='-';
	}
	do {
		val=(val*10)+c-'0';
	} while((c=getchar()) && (c>='0' && c<='9'));
 
	return val*(neg?-1:1);
}
template<class... Args>
inline void print(Args&&... args){
    ((cout << args << " "), ...) << "\n";
}
template<class T>
inline void parr(T arr){
    for(auto a : arr) cout << a << " ";
    cout << "\n";
}

vector<int> adj[1000];
int visited[10000];
void dfs(int src)
{
	visited[src]=1;
	for(auto child: adj[src])
	{
		if(visited[child]==0)
			dfs(child);
	}
}

int main()
{ 

fast;
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

// main content

    int n,m,i,j,t,x,y,cc=0,k;
    long long int val;
   	cin>>n>>m;
   	for(i=0;i<m;i++)
   	{
   		cin>>x>>y;
   		adj[x].pb(y);
   		adj[y].pb(x);
   	}
   	for(i=1;i<=n;i++)
   	{
   		if(visited[i]==0)
   		{
   			dfs(i);
   			cc++;
   		}
   	}
val=pow(2,n-cc);
cout<<val;




return 0;
}
 