#include <bits/stdc++.h>
using namespace std;



int ks(int weight[],int value[],int index,int w){
    if(index<0 || w<0){
         return 0;
    }
    int pick=-1,dpick=0;
    dpick=ks(weight,value,index-1,w);
    if(weight[index]<=w)
    {
      pick=value[index]+ks(weight,value,index-1,w-weight[index]);
    }
    return max(pick,dpick);
}
int main()
{
   int weight[]={3,2,5,4};
   int value[]={10,5,15,20};
   int capacity=8;
   int len=sizeof(value)/sizeof(value[0]);
   cout<<ks(weight,value,len-1,capacity);
     
    return 0;
}