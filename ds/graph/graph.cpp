#include<iostream>
#include<list>
#include<unordered_map>
using namespace std;
//for generic type data to be accessed
template<typename T>
//creating adjacent list for graph
class graph{
    public:
        unordered_map<T,list<T>> adj;
        bool direction;
        void addedge(T u,T v,bool direction)
        {
            adj[u].push_back(v);
            if(direction==0)
            {
                adj[v].push_back(u);
            }
        }
        void printadj()
        {
            for(auto i:adj)
            {
                cout<<i.first<<"-> ";
                for(auto j:i.second)
                {
                    cout<<j<<" ";
                }
                cout<<endl;
            }
        }

};
int main()
{
    cout<<"enter the number of nodes";
    int n;
    cin>>n;
    int m;
    cout<<"enter the number of edges";
    cin>>m;
    graph<int> g;
    for(int i=0;i<m;i++)
    {
        int u,v;
        cin>>u>>v;
        g.addedge(u,v,0);
    }
    g.printadj();
    return 0;
}