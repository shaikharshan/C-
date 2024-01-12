#include<iostream>
using namespace std;
//parent class
class vehicle
{
    void honk()
    {
        string brand="ford";
        cout<<"honk";
        

    }
};
//derived class
class car:public vehicle
{  
    public:
    string name="mustang";

};

int main()
{

}