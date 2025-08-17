#include <bits/stdc++.h>
#define int long long int
//#define mod 998244353
#define endl '\n'
#define YES cout << "YES" << endl
#define NO cout << "NO" << endl
#define Yes cout << "Yes" << endl
#define No cout << "No" << endl
#define optimized                    \
  ios_base ::sync_with_stdio(false); \
  cin.tie(0);                        \
  cout.tie(0);
using namespace std;
// const int N=1e6+1,mod=1000004329,base=37;
// int p[N],in[N],h[N],h2[N];
// int tar; 
// int bin(int a,int b)
// {
//     int ans=1;
//     a%=mod;
//     while(b>0)
//     {
//         if(b&1)ans=((ans%mod)*(a%mod))%mod;
//         a=((a%mod)*(a%mod))%mod;
//         b>>=1;
//     }
//     return ans;
// }
// void power()
// {
//   p[0]=1;
//   for(int i=1;i<N;i++)
//   {
//     p[i]=(p[i-1]*base)%mod;
//     in[i]=(bin(p[i],mod-2));
//   }
// }
// void hsh(string s)
// {
//   int n=s.size(),pre=0;
//   for(int i=0;i<n;i++)
//   {
//    pre=pre+((s[i]-'a'+1)*p[i])%mod;
//    pre%=mod;
//    h[i]=pre;
//   }
// }

// int check(int i,int j)
// {
//   int pre=h[j];
//   if(i-1>=0)
//   {
//     pre=(pre-h[i-1]+mod)%mod;
//     pre=(pre*in[i])%mod;
//   }
 
//   return pre;
// } 
vector<int>v;
vector<int>vis;
vector<vector<int>>graph;
int m,ans=0;
void dfs(int st,int c)
{

vis[st]=1;
if(v[st])c++;
else c=0;
if(c>m)return;
//cout<<st+1<<" ";
bool res=true;
for(auto it:graph[st])
{
  if(!vis[it])
  {
    res=false;
    dfs(it,c);
  }
}
if(res)ans++;

}
void sol()
{
int n;cin>>n>>m;
graph.resize(n);
vis.assign(n,0);
for(int i=0;i<n;i++)
{
  int a;cin>>a;
  v.push_back(a);
}
for(int i=0;i<n-1;i++)
{
int a,b;cin>>a>>b;
graph[a-1].push_back(b-1);
graph[b-1].push_back(a-1);
}
//cout<<graph.size();
for(auto it:graph)
{
  for(auto a:it)
  {
    cout<<a+1<<" ";
  }
  cout<<endl;
}
int c=0;

dfs(0,c);
//cout<<ans<<endl;
}
int32_t main()
{
 // power();
  optimized;
  // int t;cin>>t;
  // int c=1;
  // while(t--)
  // {
  //   cout<<"Case "<<c<<":"<<endl;
  //   sol();
  //   v.clear();
  //   c++;
  // }
sol();
  return 0;
}
