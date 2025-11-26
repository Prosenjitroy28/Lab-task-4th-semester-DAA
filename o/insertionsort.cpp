#include <bits/stdc++.h>
using namespace std;


void bubblesort(int arr[],int n)
{
    for(int i=0;i<n-1;i++)
    {   bool res=false;
        for(int j=0;j<n-1-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
                res=true;
            }
        }
        if(!res)break ;
    }

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
void insertionSort(int arr[],int n) 
{
   for(int i=1;i<n;i++)
   {
    int cur=arr[i];
    int pre=i-1;
    while(pre>=0&&arr[pre]>cur)
    {
        arr[pre+1]=arr[pre];
        pre--;
    }
    arr[pre+1]=cur;
   }
   for(int i=0;i<n;i++)
   {
    cout<<arr[i]<<" ";
   }
}

int main()
{
    int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
   
    //insertionSort(arr,n);
    cout<<endl;
    bubblesort(arr,n);
     
    return 0;
}