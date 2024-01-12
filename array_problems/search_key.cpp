#include<iostream>
using namespace std;
int main(){
    //search key at index in array
    int arr[6]={5,6,78,12,24,65};
    int i,k,d;
    cout<<"enter the key ";
    cin>>d;
    for(i=0;i<6;i++)
    {
        if(arr[i]==d)
        {
            cout<<"the key "<<d<<" was found at index "<<i;
            break;
        }
    }
    return 0;


}