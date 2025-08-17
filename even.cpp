#include <bits/stdc++.h>
#define int long long int
#define mod 998244353
using namespace std;


// int sum(int n,vector<int>an)
// {
//   int res=0;
//   for(int i=1;i<=n;i++)
//   {
//    res+=(an[i]);
//    res%=mod;
//   }
//   return res;
// }
// int sum_in(int n,vector<int>an)
// {
//   int res=0;
//   for(int i=1;i<=n;i++)
//   {
//    res+=(an[i]*i)%mod;
//    res%=mod;
//   }
//   return res;
// }

  


void sol()
{
    int n;cin>>n;
   string s;cin>>s;
   int arr[n+1]={0};
   for(int i=0;i<n;i++)cout<<i<<arr[i]<<endl;
}
int32_t main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0),cout.tie(0);
  int t;cin>>t;
  while(t--)
  {
    sol();
  }
  return 0;
}