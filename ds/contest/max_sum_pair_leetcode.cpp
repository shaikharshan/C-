//You are given a 0-indexed integer array nums. You have to find the maximum sum of a pair of numbers from nums such that the maximum digit in both numbers are equal.

//Return the maximum sum or -1 if no such pair exists.
#include<iostream>
#include<vector>
#include<algorithms>
using namespace std;

int rev(int num)
    {
        int rev_num = 0;
    while (num > 0) {
        rev_num = rev_num * 10 + num % 10;
        num = num / 10;
    }
    return rev_num;
    }
    int maxSum(vector<int>& nums) {
        int n = nums.size();
        map<int,bool> m;
        int maxsum = INT_MIN;
        int sum=0;
        for(int i=0;i<n;i++)
        {
            if(m.find(nums[i])!=m.end())
            {
                if(m.find(rev(nums[i])) != m.end())
                {
                    sum = nums[i] + rev(nums[i]);
                    if(sum>maxsum)
                    {
                        maxsum = sum;
                    }
                }
                
            }
            else
            {
                m[nums[i]] = true;
            }
        }
        return maxsum;
        
    }