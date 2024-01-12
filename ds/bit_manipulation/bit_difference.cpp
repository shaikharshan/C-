//You are given two numbers A and B. The task is to count the number of bits needed to be flipped to convert A to B.


int countBitsFlip(int a, int b){
        
        // Your logic here
        int cnt=0;
        while(a>0 || b>0)
        {
            if((a^b) & 1)
            {
                cnt++;
            }
            a=a/2;
            b=b/2;
        }
        return cnt;
        
    }