#include<iostream>
using namespace std;
int main()
{
    //size of array without using sizeOf()
    int arr[]={1,2,3,4,5};
    // arr[0]= *&arr[]
    cout<<(&arr+1)<<endl;
    cout<<(arr)<<endl;
    //arr points to the first element of the array but &arr points to the whole array 
    // hence incrementing &arr+1 causes adress to increase by 4*n (n is length of array,4 bytes is int memory)  
    int n = *(&arr+1) - arr;//subtracting (increase of 4*n in &arr+1) and ()
    cout<<n<<endl;
   
     int array[5];
  
   cout << "array = " << array << " : &array = " << &array << endl;
 
   cout << "array + 1 = " << array + 1 << " : &array + 1 = " << &array + 1;    
   return 0;

}