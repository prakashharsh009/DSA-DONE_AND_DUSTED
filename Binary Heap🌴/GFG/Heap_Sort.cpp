#include <bits/stdc++.h>

using namespace std;

//Data Struture
class MinHeap
{

public:
    int *arr;
    int size;
    int capacity;

    // Constructor
    MinHeap(int c)
    {

        arr = new int[c];
        size = 0;
        capacity = c;
    }

    int parent(int i)
    {
        return (i - 1) / 2;
    }

    int left(int i)
    {
        return (2 * i + 1);
    }
    int right(int i)
    {
        return (2 * i + 2);
    }

    int getVal(int i)
    {
        return arr[i];
    }

    // INSERTION IN BINARY HEAP

    void insertHeap(int x)
    {
        if (size == capacity)
        {
            return;
        }

        size++;
        arr[size - 1] = x;

        for (int i = size - 1; i != 0 && arr[parent(i)] > arr[i];)
        {
            swap(arr[i], arr[parent(i)]);
            i = parent(i);
        }
    }

    // MIN HEAPIFY

    void minHeapify(int idx)
    {

        int lt = left(idx), rt = right(idx);

        int smallest = idx;

        // Checking if the left and right descendant exist and also if the the root node violates the min-heap property
        if (lt < size && arr[lt] < arr[idx])
        {
            smallest = lt;
        }
        if (rt < size && arr[rt] < arr[smallest])
        {
            smallest = rt;
        }

        // if root node and smallest node is same, then no need to further proceed (already heapfied), else
        if (smallest != idx)
        {
            swap(arr[smallest], arr[idx]);
        }

        // recursively calling till it reaches the last level of Heap
        minHeapify(smallest);
    }

    // EXTRACT MIN

    int extractMin()
    {

        if (size == 0)
        {
            return INT_MAX;
        }
        if (size == 1)
        {
            size--;
            return arr[0];
        }

        int root = arr[0];
        swap(arr[0], arr[size - 1]);
        size--;

        minHeapify(0);

        return root;
    }


};

// MAX HEAPIFY - auxiliary function in HeapSort
void maxHeapify(int arr[], int n, int i)
{

    int largest = i, left = (2 * i + 1),
    right =(2 * i + 2);
    if (left < n && arr[left] > arr[largest])
    {
        largest = left;
    }
    if (right < n && arr[right] > arr[largest])
    {
        largest = right;
    }

    if (largest != i)
    {
        swap(arr[largest], arr[i]);
        maxHeapify(arr, n, largest);
    }
}

void buildHeap(int arr[], int n)
{
    for (int i = (n - 2) / 2; i >= 0; i--)
    {
        maxHeapify(arr, n, i);
    }
}

void HeapSort(int arr[], int n ){

    buildHeap(arr, n);

    for (int i = n-1; i>=1; i--){
        swap(arr[0], arr[i]);
        maxHeapify(arr, i , 0);
    }

}

//Driver Function 
int main(){

//  MinHeap myHeap(10);

    int arr[] = {50,20,10,4,15};
    int n = 5;

    HeapSort(arr,n);

    for (auto x: arr){
        cout<<x<<" ";
    }


    return 0;
}