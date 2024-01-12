#include<iostream>
using namespace std;
int main(){
    //pointers
    int a=3;
    int* b= &a;
    cout<<"address of a="<<&a<<endl;
    cout<<"address of a="<<b<<endl;
    //dereference operator
    cout<<"value at a="<<*b;
    int** c= &b;
    cout<<"the value of b"<<*c;
    cout<<"adress of b ="<<c;
    

    return 0;
}