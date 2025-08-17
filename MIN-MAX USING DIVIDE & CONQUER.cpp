#include<bits/stdc++.h>
using namespace std;

pair<int,int>findm(vector<int>&v,int l,int r)
{
    cout<<v[l]<<" "<<v[r]<<endl;
    if(l==r) return {v[l],v[l]};
    if(l+1==r) return {min(v[l],v[r]),max(v[l],v[r])};

    int mid=(l+r)/2;
    auto left=findm(v,l,mid);
    auto right=findm(v,mid+1,r);
    return {min(left.first,right.first),max(left.second,right.second)};
}

int main()
{
    vector<int>v={1,3,2,4,8,6};
    int len=v.size();
    pair<int,int>p=findm(v,0,len-1);
    cout<<"min:"<<p.first<<" "<<"max:"<<p.second<<endl;
}