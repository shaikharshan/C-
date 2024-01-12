#include<iostream>
using namespace std;
 typedef struct employee
{
    int id;
    float salary;
    char section;
}changed;

int main(){
    changed rohan; 
    {   
        rohan.id = 546;
        rohan.salary = 12.5;
        rohan.section = 'b';
        cout<<rohan.id;
    }
    
}