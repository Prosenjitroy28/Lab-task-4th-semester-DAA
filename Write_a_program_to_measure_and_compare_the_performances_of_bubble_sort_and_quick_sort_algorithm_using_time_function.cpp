#include <bits/stdc++.h>
using namespace std;

void bubbleSort(vector<int>& arr) {
    int n = arr.size();
    for(int i=0; i<n-1; i++)
        for(int j=0; j<n-i-1; j++)
            if(arr[j] > arr[j+1])
                swap(arr[j], arr[j+1]);
}

int partition(vector<int>& arr, int low, int high) {
    int pivot = arr[high], i = low-1;
    for(int j=low; j<high; j++) {
        if(arr[j] < pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i+1], arr[high]);
    return i+1;
}
void quickSort(vector<int>& arr, int low, int high) {
    if(low < high) {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi-1);
        quickSort(arr, pi+1, high);
    }
}

int main() {
    vector<int> arr1 = {9,7,5,3,1};
    vector<int> arr2 = arr1;

    clock_t start = clock();
    bubbleSort(arr1);
    clock_t end=clock();
    cout << "Bubble Sort Time: " << (double)(end-start)/CLOCKS_PER_SEC << "s\n";

    start = clock();
    quickSort(arr2, 0, arr2.size()-1);
     end=clock();
    cout << "Quick Sort Time: " << (double)(end-start)/CLOCKS_PER_SEC << "s\n";
}
