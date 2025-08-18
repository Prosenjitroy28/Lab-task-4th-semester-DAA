#include <bits/stdc++.h>
using namespace std;

void sumofs(int tar,vector<int>&v,int index,vector<int>&cur)
{
if(tar==0)
{
    for(auto it:cur)cout<<it<<" ";
    cout<<endl;
    return;
}    
if(tar<0 || index==v.size())return;
cur.push_back(v[index]);
sumofs(tar-v[index],v,index+1,cur);
cur.pop_back();
sumofs(tar,v,index+1,cur);
}

int main() {
    vector<int>v={2,3,5,7};
    int tar=10;
    vector<int>cur;
    sumofs(tar,v,0,cur);
}
