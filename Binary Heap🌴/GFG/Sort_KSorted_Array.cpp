
#include <bits/stdc++.h>


using namespace std;

void sort_k_sorted_array(int *arr, int n, int k)
{

    // Insert first k+1 items in a priority queue (or min
    // heap)
    //(A O(k) operation). We assume, k < n.
    // if size of array = k i.e k away from its target position
    // then
    int size;
    size = (n == k) ? k : k + 1;
    priority_queue<int, vector<int>, greater<int>> pq(arr, arr + size);

    // i is index for remaining elements in arr[] and index
    // is target index of for current minimum element in
    // Min Heap 'pq'.
    int index = 0;
    for (int i = k + 1; i < n; i++)
    {
        arr[index++] = pq.top();
        pq.pop();
        pq.push(arr[i]);
    }

    while (pq.empty() == false)
    {
        arr[index++] = pq.top();
        pq.pop();
    }
}

void print_array(int *arr, int n)
{
    for(int i=0; i<n; i++){
    cout<<arr[i]<<" ";
    }
}
int main()
{
    int arr[] = {9,8,7,18,19,17};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k=3;
    cout<<"Sort the k sorted array in which k = 3"<<endl;
    cout<<"\nThe Sorted array : ";
    sort_k_sorted_array(arr, n, k);
    print_array(arr, n);
    return 0;
}