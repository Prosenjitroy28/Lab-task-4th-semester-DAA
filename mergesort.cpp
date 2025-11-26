#include <iostream>
using namespace std;

//void merge(int arr[],int left[],int right[],int nl,int nr);
void merge(int arr[],int left[],int right[],int nl,int nr){
    int i=0,j=0,k=0;
    
    while(i<nl && j<nr){
        if(left[i]<right[j]){
            arr[k]=left[i];
            i++;k++;
        }
        else{
            arr[k]=right[j];
            j++;k++;
        }
    }

    while(i<nl){
        arr[k]=left[i];
        i++;k++;
    }
    while(j<nr){
        arr[k]=right[j];
        j++;k++;
    }

}
void mergesort(int arr[],int n){
   if(n<2)return;

   int mid=n/2;
   
   int left[mid],right[n-mid];
   for(int i=0;i<mid;i++)
   left[i]=arr[i];
   for(int i=mid;i<n;i++)
   right[i-mid]=arr[i];

   mergesort(left ,mid);
   mergesort(right,n-mid);
   int nl=mid;
   int nr=n-mid;
   merge(arr,left,right,nl,nr);


}


int main()
{
    int n=6;
   int arr[n]={7,3,4,1,4,6};
  
   mergesort(arr,n);

  // for(int i=0;i<6;i++)
   cout<<arr[0]<<" "<<arr[n-1];
   

    return 0;
}