#include <bits/stdc++.h>
using namespace std;


int BS(vector<int>&arr,int start,int end,int key){
    if(start>end) return -1;
    int mid=(start+end)/2;
    if(arr[mid]==key)return mid;
    if(arr[mid]>key)BS(arr,start,mid-1,key);
    else BS(arr,mid+1,end,key);
}



 int main(){
  vector<int>arr={1,2,3,4,5,6};
  int value;cin>>value;
  int result=BS(arr,0,arr.size()-1,value);
  if(result==-1)cout<<"Not found";
  else
  cout<<value<<" found in index of:"<<result;


    return 0;
 }