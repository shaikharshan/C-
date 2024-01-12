/*Advantage of OOPs over Procedure-oriented programming language
OOPs makes development and maintenance easier where as in Procedure-oriented programming language it is not easy to manage if code grows as project size grows.
OOPs provide data hiding whereas in Procedure-oriented programming language a global data can be accessed from anywhere.
OOPs provide ability to simulate real-world event much more effectively. We can provide the solution of real word problem if we are using the Object-Oriented Programming language.*/
//insert and display
#include<iostream>
using namespace std;
class student{
    public:
        int id;
        string name;
    void insert(int n,string na)
    {
        id=n;
        name=na;
    }
    void display()
    {
        cout<<this->id;
        cout<<this->name;
    }
    
    
};
int main()
{   
    student s1;
    s1.insert(63,"arshan");
    s1.display();
}