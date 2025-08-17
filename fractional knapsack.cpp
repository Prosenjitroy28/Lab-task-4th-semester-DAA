#include <bits/stdc++.h>
#define ll long long int
using namespace std;



struct Item{
  int weight,value;
  double ratio;
  void input(int w,int v)
  {
    weight=w;
    value=v;
    ratio=value/(double)weight;
  }

};
bool com(Item A,Item B)
{
if(A.ratio>B.ratio)return true;
return false;
}
double ks(Item I[],int n,int w)
{
    double total=0;
    
    for(int i=0;i<n;i++){
        
        if(I[i].weight<=w)
        {
            total+=I[i].value;
            w-=I[i].weight;
        }
        else 
        {
            total+=I[i].ratio*w;
            break;
        }
    }
    return total;
}

int main()
{   int n=4;
    Item knap[n];
    for(int i=0;i<n;i++)
    {  int a,b;cin>>a>>b;
        knap[i].input(a,b);
    }
    sort(knap,knap+4,com);
    cout<<ks(knap,n,5);
     
    return 0;
}