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
// int N=1e6+1;
// vector<int>p(N+1);
// void sieve()
// {
// p[0]=1,p[1]=1;
// for(int i=2;i*i<=N;i++)
// {
//   if(p[i]==0)
//   {
//     for(int j=i*i;j<=N;j+=i)
//     p[j]=1;
//   }
// }
// }
// void bfs(int st,vector<vector<int>>&v,vector<int>&vis)
// {
// queue<int>q;
// vis[st]=true;
// q.push(st);
// while(!q.empty())
// {
//   int p=q.front();q.pop();
//  // cout<<a<<" ";
//   for(int it:v[p])
//   {
//     if(!vis[it])
//   {
//     vis[it]=true;
//     q.push(it);
//    // visi++;
//   }
//   }
// }
// }
vector<vector<int>>v;vector<int>vis;
vector<int>d;
set<int>sd;
void dfs(int st,int &nd,int &ed)
{
  vis[st]=1;
  nd++;
  ed+=v[st].size();
  d[st]=v[st].size();
  sd.insert(d[st]);
 // cout<<d[st]<<endl;
 // cout<<nd<<" "<<ed<<endl;
 // cout<<st<<" ";
 // cout<<"cat"<<cat<<" ";
 int p=st;
 //cout<<p<<" "<<st<<endl;
  for(auto it:v[st])
  {
    if(!vis[it])
    {
      dfs(it,nd,ed);
    }
  }
  //cout<<"res:"<<res<<endl;
}
void sol()
{
int n,m;cin>>n>>m;
v.resize(n+1);
vis.resize(n+1,0);
d.resize(n+1);
for(int i=1;i<=m;i++)
{
  int a,b;cin>>a>>b;
  v[a].push_back(b);
  v[b].push_back(a);

}
//cout<<dfs(1,v,vis)<<endl;;
int ans=0;
for(int i=1;i<=n;i++)
{
  if(!vis[i])
  {
    int nd=0,ed=0;
    dfs(i,nd,ed);
   // cout<<nd<<" "<<ed<<endl;
    if(nd>2 && nd==ed/2 && (sd.size()==1 && *sd.begin()==2))ans++;
    sd.clear();
  }

}
if(ans>0)
{
cout<<"Suspicious bugs found!"<<endl;
}
else cout<<"No suspicious bugs found!"<<endl;
}

int32_t main()
{
 // sieve();
 // power();
  optimized;
  int t;cin>>t;
  int c=1;
  while(t--)
  {
    cout<<"Scenario "<<"#"<<c<<":"<<endl;
    sol();
   //s.clear();
    c++;
  }
//sol();
  return 0;
}
