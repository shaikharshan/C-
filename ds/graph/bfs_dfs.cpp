#include<iostream>
#include<list>
#include<unordered_map>
#include<vector>
#include<queue>
using namespace std;
vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        int visited[V] = {0};
        vector<int> ans;
       queue<int> q;
       q.push(0);
       visited[0] =1;
       while(!q.empty())
       {
           int fnode = q.front();
           q.pop();
           ans.push_back(fnode);
           for(auto i:adj[fnode])
           {
               //we have to check neighbouring elements of fnode through adj list
               if(!visited[i])
               {
                   visited[i]=1;
                   q.push(i);
               }
               
           }
           
       }
       return ans;
       
    }