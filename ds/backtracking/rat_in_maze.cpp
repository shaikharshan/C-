#include <bits/stdc++.h> 
bool issafe(int newx,int newy,vector < vector < int >> & arr,int n, vector<vector<bool>> visited)
{
    //3 conditions
    if((newx>=0 && newx<n) &&( newy>=0 &&newy<n) && (arr[newx][newy]==1) && visited[newx][newy]!=1 )
    {
        return true;
    }
   return false;
}
void solve(int x,int y,vector<string>& ans,vector < vector < int >> & arr,int n, vector<vector<bool>> visited,string path)
{
     visited[x][y]=1;
    if(x==n-1 && y==n-1)
    {
        ans.push_back(path);
        return;
    }
    //down
    if(issafe(x+1,y,arr,n,visited));
    {
        
        solve(x+1,y,ans,arr,n,visited,path+'D');
        visited[x][y]=0;
    }
    //left
    if(issafe(x,y-1,arr,n,visited));
    {
   
        solve(x,y-1,ans,arr,n,visited,path+'L');
        visited[x][y]=0;
    }
    //right
    if(issafe(x,y+1,arr,n,visited));
    {
     
        solve(x,y+1,ans,arr,n,visited,path+'R');
        visited[x][y]=0;
    }
    //up
    if(issafe(x-1,y,arr,n,visited));
    {
        
        solve(x-1,y,ans,arr,n,visited,path+'U');
       
    }
     visited[x][y]=0;
}
vector < string > searchMaze(vector < vector < int >> & arr, int n) {
    // Write your code here.
    vector<vector<bool>> visited(n,vector<bool>(n,0));
    vector<string> ans;
    if(arr[0][0]==0)
    {
        return ans;
    }
    string path;
    solve(0,0,ans,arr,n,visited,path);
    return ans;
}