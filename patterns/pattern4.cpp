#include<iostream>
using namespace std;
int main(){
    //number pyramid
    int n =5;
     for(int i=1;i<=n;i++)
    {
        for(int j=1;j<i+1;j++)
        {
            cout<<i;
        }
        cout<<endl;
    }
    cout<<endl;
    //floyd`s traingle
    int cnt=1; 
      for(int i=1;i<=n;i++)
    {
        for(int j=0;j<i;j++)
        {
            cout<<cnt<<" ";
            cnt=cnt+1;
        }
        cout<<endl;
    }
    return 0;
}