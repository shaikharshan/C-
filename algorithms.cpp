#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(4);
    v.push_back(7);
    cout<<binary_search(v.begin(),v.end(),3);
    cout<<lower_bound(v.begin(),v.end(),1)-v.begin();
    
}