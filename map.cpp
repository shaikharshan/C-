#include<iostream>
#include<map>
using namespace std;
int main()
{
    map<int,string> m;
    m[1]="arshan";
    m.insert({2,"shaikh"});
    m.insert({3,"a"});
    m.insert({4,"b"});
    for(auto i:m)
    {
        cout<<i.first<<endl;
        cout<<i.second<<endl;
    }
    m.erase(1);
    auto it = m.find(2);//returns iterator at key
    for(auto i=it;i!=m.end();i++)
    {
        cout<<(*i).second<<" ";
    }

}