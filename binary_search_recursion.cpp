#include <bits/stdc++.h>
using namespace std;


int BS(int arr[],int start,int end,int key){
    if(start>end) return -1;
    int mid=(start+end)/2;
    if(arr[mid]==key)return mid;
    if(arr[mid]>key)BS(arr,start,mid-1,key);
    else BS(arr,mid+1,end,key);
}



 int main(){
  int n,value;cin>>n;
  int arr[n];
  for(int i=0;i<n;i++)cin>>arr[i];
  cin>>value;
  cout<<BS(arr,0,n-1,value);


    return 0;
 }