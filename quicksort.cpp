#include <bits/stdc++.h>
using namespace std;
vector<int> sort(vector<int> left, vector<int> right, int pivot)
{
    vector<int> sorted;
    for (int
             i = 0;
         i < left.size();
         i++)
        sorted.push_back(left[i]);
    sorted.push_back(pivot);
    for (int
             i = 0;
         i < right.size();
         i++)
        sorted.push_back(right[i]);

    return sorted;
}
vector<int> quick_sort(vector<int> A)
{
    if (A.size() <= 1)
        return A;
    int pivot = 0;
    vector<int> left, right;

    for (int i = 0; i < A.size(); i++)

    {
        if (pivot == i)
            continue;
        if (A[i] <= A[pivot])
            left.push_back(A[i]);

        else
            right.push_back(A[i]);
    }
    left = quick_sort(left);
    right = quick_sort(right);
    return sort(left, right, A[pivot]);
}

int main()
{
    int n;
    cin >> n;
    vector<int> A(n);
    for (int
             i = 0;
         i < n; i++)
        cin >> A[i];
    A = quick_sort(A);
    for (int val : A)
        cout << val << " ";
    return 0;
}