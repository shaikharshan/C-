#include <bits/stdc++.h> 
int solve(vector<int> & nums,int n)
{
    if(n<0)
    {
        return 0;
    }
    if(n==0)
    {
        return nums[0];
    }
 
    int include = solve(nums,n-2)+nums[n];
    int exclude= solve(nums,n-1) + 0 ;
    return max(include,exclude);

}

int solveDP(vector<int> &nums,vector<int> &dp,int n)
{
    if(n<0)
    {
        return 0;
    }
    if(n==0)
    {
        return nums[0];
    }
    if(dp[n]!=-1)
    {
        return dp[n];
    }
    int include = solveDP(nums,dp,n-2)+nums[n];
    int exclude= solveDP(nums,dp,n-1) + 0 ;
    dp[n]= max(include,exclude);
    return dp[n];

}
int solveTabulation(vector<int> &nums,vector<int> &dp,int n)
{
    dp[0] = nums[0];
    for(int i=1;i<n;i++)
    {
        
        
            int incl = nums[i];
            if(i>1)
            {
                incl+=dp[i-2];
            }
        int excl = dp[i-1] + 0;
        dp[n] = max(incl,excl);

    }
    return dp[n-1];
    
}
int spaceOpti(vector<int> &nums,int n)
{
    int prev1 = nums[0];
    int prev2 = 0;
    int curr;
    for(int i=1;i<n;i++)
    {
        
        
            int incl = nums[i];
            if(i>1)
            {
                incl+=prev2;
            }
        int excl = prev1 + 0;
        curr= max(incl,excl);
        prev2=prev1;
        prev1=curr;



    }
    return prev1;
    
}
int maximumNonAdjacentSum(vector<int> &nums){
    // Write your code here.
     int n = nums.size();
    // int ans = solve(nums,n-1);
    // return ans;
    vector<int> dp(n,-1);
    return solveDP(nums,dp,n-1);


}