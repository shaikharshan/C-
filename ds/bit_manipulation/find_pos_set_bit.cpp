//Given a number N having only one ‘1’ and all other ’0’s in its binary representation, find position of the only set bit. If there are 0 or more than 1 set bit the answer should be -1. Position of  set bit '1' should be counted starting with 1 from LSB side in binary representation of the number.


 int findpos(int n)
    {
        int ans=0;
        int pos = 1;
        int cnt =0;
        while(n>0)
        {
            int dig = n&1;
            if(dig ^ 1 == 0)
            {
                ans = pos;
                cnt++;
            }
            n = n/2;
            pos++;
        }
        if(cnt!=1)
        {
            return -1;
        }
        else
        {
            return ans;
        }
    }
    int findPosition(int N) {
        // code here
        return findpos(N);
    }
