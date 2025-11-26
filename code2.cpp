#include <bits/stdc++.h>
#define int long long int
// #define mod 998244353
#define endl '\n'
#define YES cout << "YES" << endl
#define NO cout << "NO" << endl
#define Yes cout << "Yes" << endl
#define No cout << "No" << endl
#define INF 1e18
#define optimized                    \
  ios_base ::sync_with_stdio(false); \
  cin.tie(0);                        \
  cout.tie(0);
using namespace std;
// bool com(const pair<int,int> &a, const pair<int,int> &b)
// {
//     return a.second > b.second; 
// }
// int N=1e5+1;
// vector<int>vis(N,false);
// void bfs(int st,vector<vector<int>>&v)
// {
//   queue<int>q;
//   q.push(st);
//   vis[st]=true;
//   while(!q.empty())
//   {
//     int a=q.front();
//     q.pop();
//     for(int it:v[a])
//     {
//       if(!vis[it])
//       {
//         vis[it]=true;q.push(it);
//       }
//     }
//   }
// }
void sol(){
  
  int n,m;cin>>n>>m;
  vector<vector<pair<int,int>>>nodes(n+1);
  for(int i=0;i<m;i++)
  {
    int a,b,c;cin>>a>>b>>c;
    nodes[a].push_back({b,c});
   // nodes[b].push_back({a,c});
  }
 vector<int>dis(n+1,INF);
 priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
 dis[1]=0;
 pq.push({0,1});
 vector<int>ans(n+1,-1);
 while(!pq.empty())
 {
  int cost=pq.top().first;
  int node=pq.top().second;
  pq.pop();
  if(cost!=dis[node])continue;
  for(auto it:nodes[node])
  {
    if(dis[node]+it.second<dis[it.first])
    {
     dis[it.first]=dis[node]+it.second;
     ans[it.first]=node;
     pq.push({dis[it.first],it.first});
    }
  }
 }
for(int i=1;i<=n;i++)
{
  cout<<dis[i]<<" ";
}
}

int32_t main()
{
  // power();
  optimized;
  // int t;cin>>t;
  // int c=1;
  // while(t--)
  // {
  //   //cout<<"Case "<<c<<":"<<endl;
  //   sol();
  //   // v.clear();
  //   // c++;
  // }
  sol();
  return 0;
}
