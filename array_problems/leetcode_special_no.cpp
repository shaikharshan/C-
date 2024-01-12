//You are given a 0-indexed string num representing a non-negative integer.

//In one operation, you can pick any digit of num and delete it. Note that if you delete all the digits of num, num becomes 0.

//Return the minimum number of operations required to make num special.

//An integer x is considered special if it is divisible by 25.
/* num = "2245047"
Output: 2
Explanation: Delete digits num[5] and num[6]. The resulting number is "22450" which is special since it is divisible by 25.*/
 #include<iostream>
using namespace std;
#include<vector>
#include<algorithms>

int minimumOperations(string num) {
        bool found0 = false;
        bool found5 = false;
        int n  = num.length();
        for(int i=n-1;i>=0;i--)
        {
            if(found0 && num[i]=='5')
            {
                return n - 2 - i;
            }
            if(found0 && num[i]=='0')
            {
                return n-2-i;
            }
            if(found5 && num[i]=='2')
            {
                return n-2-i;
            }
            if(found5 && num[i]=='7')
            {
                return n-2-i;
            }
            if(num[i]=='0')
            {
                found0=true;
            }
            if(num[i]=='5')
            {
                found5=true;
            }
        }
        if(found0)
        {
            return n-1;
        }
        return n;
    
    }