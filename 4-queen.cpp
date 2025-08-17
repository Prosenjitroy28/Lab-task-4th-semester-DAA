#include <bits/stdc++.h>
using namespace std;

int cnt=0;

bool isValid(int row,int col,int n,vector<vector<int>>&v)
{
    int r=row,c=col;
    while(r>=0 && c>=0)
    {
        if(v[r][c]==1)return false;
        c--;r--;
    }
    r=row;c=col;
    while(r<n && c>=0)
    {
        if(v[r][c]==1)return false;
       r++;c--;
    }
    r=row;c=col;
    while(c>=0)
    {
        if(v[r][c]==1)return false;
        c--;
    }
    return true;
}
void nq(int col,int n,vector<vector<int>>&v)
{
    
    if(col>=n)
    {
        cnt++;return;
    }
    for(int row=0;row<n;row++)
    {
        if(isValid(row,col,n,v))
        {
            v[row][col]=1;
            nq(col+1,n,v);
            v[row][col]=0;
        }
    }
}

int main() {
    int n=4;
    vector<vector<int>>v(n,vector<int>(n));
    nq(0,n,v);
    cout<<cnt<<endl;

}
