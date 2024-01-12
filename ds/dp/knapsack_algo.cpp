#include<iostream>
#include<queue>
using namespace std;

 //for repeating values if values can be taken again
 int f(int N ,int W , int val[],int wt[])
    {
        if(N==0)
        {
              return (W/wt[0])*val[0];
        }
        int notTake=0;
         notTake = 0 + f(N-1,W,val,wt);
        int Take = INT_MIN;
        if(W>=wt[N])
        {
            Take = val[N] + f(N,W-wt[N],val,wt);//change here N instead of N-1
        }
        return max(notTake,Take);
    }
    int knapSack(int N, int W, int val[], int wt[])
    {
        // code here
        vector<vector<int>> dp(N,vector<int>(W+1,-1));
        return f(N-1,W,val,wt);
        
    }


//for normal knapsack use N-1
//and change base case

