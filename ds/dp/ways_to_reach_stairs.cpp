#include <bits/stdc++.h> 
#include<vector>

int solve(int nStairs,vector<int>& dp)
{
      const int mod = 1e9 +7;
    if(nStairs<0)
    {
        return 0;
    }
    if(nStairs==0)
    {
        return 1;
    }
    if(dp[nStairs]!=-1)
    {
        return dp[nStairs];
      }
    dp[nStairs]=(solve(nStairs-1,dp)+solve(nStairs-2,dp))%mod;
    return dp[nStairs];
}
int countDistinctWays(int nStairs) {
    
vector<int> dp(nStairs+1,-1);

    return solve(nStairs,dp);
    

}