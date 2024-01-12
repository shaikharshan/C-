#include<iostream>
#include<set>
using namespace std;
//set ds
//unique , sorted 
int main()
{
    set<int> s;
    s.insert(1);
    s.insert(1);
    s.insert(1);   // insert complexity O(logn)
    s.insert(1);
    s.insert(0);
    s.insert(3);
    s.insert(3);
    for(int i:s)
    {
        cout<<i<<endl;
    }
    set<int> :: iterator it=s.begin();
    it++;
    s.erase(it);
    //will erase 1 as it is at 1 index;
    s.count(3);//will tell if element is present or not
    set<int> :: iterator itr=s.find(3);
    cout<<*itr<<endl;
    return 0;


}