#include <bits/stdc++.h> 
#include<vector>
int solve(int n ,vector<int> &heights,vector<int> & dp)
{
    if(n==0)
    {
        return 0;
    }
    if(dp[n]!=-1)
    {
        return dp[n];
    }
    int left = solve(n-1,heights,dp) + abs(heights[n]- heights[n-1]);
    int right = INT_MAX;
    if(n>1)
    {
     right = solve(n-2,heights,dp) + abs(heights[n] - heights[n-2]);
    }
    dp[n] = min(left,right);
    return dp[n];

}
int frogJump(int n, vector<int> &heights)
{
    // Write your code here.
    vector<int> dp(n+1,-1);

    int ans = solve(n-1,heights,dp);
    return ans;
}