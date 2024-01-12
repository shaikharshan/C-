#include <iostream>
using namespace std;
class student
{
    public:
    int id;
    void print_id();
    void print(string na)
    {

        cout<<"hi, "<<na;
       

    }

};
void student::print_id()
{
     cout<<id;
}
int main()
{
    student s1;
    s1.id=123;
    s1.print_id();
    s1.print("arshan");
    return 0;
}
//But the main reason why semi-colons is there at end of class is compiler checks if user is trying to create an instance of class at the end of it . 