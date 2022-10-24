#include <bits/stdc++.h>

using namespace std;

//DataStructure
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

    int parent (int i){
        return (i-1)/2;

    }

    int left (int i){
        return (2*i + 1);

    }
    int right (int i){
        return (2*i + 2);

    }

    int getVal(int i){
        return arr[i];
    }

    //INSERTION IN BINARY HEAP

    void insertHeap(int x){
        if(size == capacity){return;}

        size++;
        arr[size-1] = x;

        for (int i  = size - 1; i != 0 && arr[parent(i)] > arr[i];){
            swap(arr[i], arr[parent(i)]);
            i = parent(i);
        }

    }

    //UPDATION IN BINARY HEAP - DECREASE KEY OPERATION

    void decreasekey(int i , int x){

        if(i >  capacity){return;}

        arr[i] = x;

        while(i != 0 && arr[parent(i)] > arr[i]){
            swap(arr[parent(i)], arr[i]);
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
            minHeapify(smallest);
        }

        // recursively calling till it reaches the last level of Heap
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

    //DELETE OPERATION IN BINARY HEAP

    void deleteEle(int idx){
        
        int negativeinfinite = INT_MIN;
        

        decreasekey(idx, negativeinfinite);
        extractMin();

    }
    //BUILD HEAP Function 

    void buildHeap(){
        for (int i = (size -2)/2 ; i>=0; i--){
            minHeapify(i);
        }
    }


};


//Driver Function 
int main(){

    MinHeap myHeap(8);

    myHeap.insertHeap(10);
    myHeap.insertHeap(20);
    myHeap.insertHeap(30);
    myHeap.insertHeap(40);
    myHeap.insertHeap(50);
    myHeap.insertHeap(35);
    myHeap.insertHeap(38);
    myHeap.insertHeap(45);

    myHeap.deleteEle(3);

    int res = myHeap.left(1);
    cout<<myHeap.getVal(res);


    return 0;
}