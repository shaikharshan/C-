#include<iostream>
using namespace std;
int main(){


    //inverted half pyramid 
    int n = 4;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=2*n;j++)
        {
            if(((j<=i || j>2*n-i)))
            {
            cout<<"*";
            }
            else
            {
            cout<<" ";
            }
        }
        cout<<endl;
    }
     for(int i=n;i>0;i--)
    {
        for(int j=1;j<=2*n;j++)
        {
            if(((j<=i || j>2*n-i)))
            {
            cout<<"*";
            }
            else
            {
            cout<<" ";
            }
        }
        cout<<endl;
    }

    return 0;
}