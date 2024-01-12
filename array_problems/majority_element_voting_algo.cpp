  #include<iostream>
using namespace std;
#include<vector>
#include<algorithms>
 
 int majorityElement(vector<int>& nums) {
       //moores voting algorithm
       int ele;
       int cnt=0;
       for(int i=0;i<nums.size();i++)
       {
           if(cnt==0)
           {
               cnt=1;
               ele = nums[i];
           }
           else if(ele == nums[i])
           {
               cnt++;
           }
           else
           {
               cnt--;
           }

       }
       return ele;
}