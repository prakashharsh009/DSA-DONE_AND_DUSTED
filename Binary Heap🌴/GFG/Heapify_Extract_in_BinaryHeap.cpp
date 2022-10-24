#include <bits/stdc++.h>

using namespace std;


class MinHeap{

public :
int *arr;
int size;
int capacity;

//Constructor
MinHeap(int c){

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

//MIN HEAPIFY

void minHeapify(int idx ){

    int lt = left(idx), rt = right(idx);

    int smallest = idx;

    //Checking if the left and right descendant exist and also if the the root node violates the min-heap property
    if(lt < size && arr[lt] < arr[idx]){
        smallest = lt;
    }
    if(rt < size && arr[rt] < arr[smallest]){
        smallest = rt;
    }

    //if root node and smallest node is same, then no need to further proceed (already heapfied), else 
    if(smallest != idx){
        swap(arr[smallest], arr[idx]);
    }

    //recursively calling till it reaches the last level of Heap
    minHeapify(smallest);

}


//EXTRACT MIN

int extractMin(){

    if (size == 0){
        return INT_MAX;
    }
    if(size == 1){
        size--;
        return arr[0];
    }

    int root = arr[0];
    swap(arr[0], arr[size-1]);
    size--;

    minHeapify(0);

    return root;
}

};

//Driver Function 
int main(){

    MinHeap myHeap(10);

    myHeap.insertHeap(40);
    myHeap.insertHeap(20);
    myHeap.insertHeap(30);
    myHeap.insertHeap(35);
    myHeap.insertHeap(25);
    myHeap.insertHeap(80);
    myHeap.insertHeap(32);
    myHeap.insertHeap(100);
    myHeap.insertHeap(70);
    myHeap.insertHeap(60);

    myHeap.extractMin();
    cout<<myHeap.getVal(0);

    return 0;
}