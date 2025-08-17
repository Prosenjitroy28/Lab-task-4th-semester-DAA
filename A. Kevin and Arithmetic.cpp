#include <bits/stdc++.h>
#define ll long long int
using namespace std;




int main()
{
    int n,m;cin>>n>>m;
 char arr[n][m];
 for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cin>>arr[i][j];
    }
 }
 int a=0,a_total,b_total,b=0,em=0;
 for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        if(arr[i][j]=='A')a++;
        else if(arr[i][j]=='B')b++;
        else em++;
    }
 }
 cout<<abs(a-b)<<" "<<em<<endl;
 if(a>b)a+=em
 a_total=a+(em/2);
 b_total=b+(em-(em/2));
 cout<<abs(a_total-b_total)<<endl;
   
     
    return 0;
}