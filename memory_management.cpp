//we declare an array with a maximum size, but some memory will be unused. To avoid the wastage of memory, we use the new operator to allocate the memory dynamically at the run time.
// In C language, we use the malloc() or calloc() functions to allocate the memory dynamically at run time, and free() function is used to deallocate the dynamically allocated memory. C++ also supports these functions, but C++ also defines unary operators such as new and delete to perform the same tasks, i.e.                                                             , allocating and freeing the memory.
#include<iostream>
using namespace std;
int main()
{
    //pointer variable 
    int *p= new int;
    float *q=new float(44.23);
    int *l=new int[8];
    //delete variables
    delete []l;
}