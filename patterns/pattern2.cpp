#include<iostream>
using namespace std;
int main()
{
//hollow rectangular pattern
     int row=5,clm=5;
    cout<<"hello world"<<endl;
    for(int i =0;i<row;i++)
    {
        for(int j=0;j<clm;j++)
        {
            if( i==0 || j==0 || i==row-1 || j==clm-1 )
            {
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}
