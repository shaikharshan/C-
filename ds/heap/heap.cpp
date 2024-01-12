#include<iostream>
#include<queue>
using namespace std;
class heap
{
    public:
    int arr[100];
    int size;
    heap()
    {
        arr[0]=-1;
        size=0;
    }
    void insert(int d)
    {
        size=size+1;
        int index = size;
            arr[index] = d;
        while(index>1)
        {
            int parent =index/2;
            if(arr[parent]<arr[index])
            {
                swap(arr[parent],arr[index]);
                index=parent;
            }
            else{
                return;
            }
        }
    }
    void print()
    {
        for(int i=1;i<=size;i++)
        {
            cout<<arr[i]<<" ";
        }cout<<endl;
    }
    void delHeap()
    {
        if(size==0)
        {
            cout<<"nothing to del"<<endl;
            return;
        }
        arr[1]=arr[size];
        size--;
        //rearranging
        int i = 1;
        while(i<=size)
        {
            int lefti = 2*i;
            int righti = 2*i + 1;
            if(lefti<size && arr[lefti]>arr[i] && arr[lefti]>arr[righti])
            {
                swap(arr[lefti],arr[i]);
                i=lefti;
            }
            else if(righti<size && arr[righti]>arr[i] && arr[righti]>arr[lefti])
            {
                swap(arr[righti],arr[i]);
                i=righti;
            }
            else
            {
                return;
            }
        }

    }

};

void heapify(int arr[],int n, int i)
{
    int largest = i;
    int lefti = 2*i;
    int righti = 2*i+1;
    if(lefti<=n && arr[lefti]>arr[largest] )
    {
        largest = lefti;
    }
    if(righti<=n && arr[righti]>arr[largest] )
    {
        largest = righti;
    }

    if(largest!=i)
    {
        swap(arr[largest],arr[i]);
        heapify(arr,n,largest);
    }

// this is 1 based indexing 

//for 0 based indexing no need of equal signs and change left right
}

void heap_sort(int arr[],int n)
{
    //size copy
    int size=n;
    while(size>1)
    {
        swap(arr[1],arr[size]);
        size--;
        heapify(arr,size,1);
    }

}
int main()
{
    // ~ to priority queue
    heap h;
    h.insert(60);
    h.insert(40);
    h.insert(30);
    h.insert(20);
    cout<<"before ";
    h.print();
    h.insert(55);
    h.delHeap();//deletes on FIFO
    cout<<"after ";
    h.print();

    int arr[6] = {-1,54,53,55,52,50};
    int n = 5;
    for(int i = n/2;i>0;i--)
    {
        heapify(arr,n,i);
    }
     for(int i=1;i<=n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    heap_sort(arr,5);
    for(int i=1;i<=n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}