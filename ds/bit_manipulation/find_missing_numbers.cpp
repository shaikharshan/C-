 #include<iostream>
using namespace std;
#include<vector>
#include<algorithms>

//when we do xor of arrau containing pair of numbers and one single number it gives us the number
 vector<int> singleNumber(vector<int> nums) 
    {
        // Code here.
        vector<int> ans;
        int n = nums.size();
        int XOR = nums[0];
        for(int i=1;i<n;i++)
        {
            XOR = XOR ^ nums[i];
        }
        int rightset = XOR & (~XOR + 1 );
        //right most bit     2's complement
        int x=0,y=0;
        for(int i=0;i<n;i++)
        {
            if(nums[i] & rightset)
            {
                x =x ^ nums[i];
            }
            else
            {
                y = y^ nums[i];
            }
        }
        ans.push_back(x);
        ans.push_back(y);
        sort(ans.begin(),ans.end());
        return ans;
        
    }