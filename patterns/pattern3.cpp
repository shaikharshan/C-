#include<iostream>
using namespace std;
int main(){


    //inverted half pyramid 
    int n =5;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    cout<<endl;
    //after 180 deg rotation
        for(int i=0;i<n;i++)
    {
        for(int j=0;j<i+1;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
