#include<iostream>
using namespace std;
    
    int main()

    {
        int arr[4]={23,12,45,56};
        int* p = arr;
        cout<<"the value of arr[1]is"<<*(p+1)<<endl;
        cout<<"arr[1]is"<<(p+1)<<endl;

        cout<<"the value of arr[2]is"<<*(p+2)<<endl;
        cout<<"the value of arr[3]is"<<*(p+3)<<endl;
        // cout<<"the value of arr[4]is"<<*(p+1);
        return 0;
    }