 int closest_power_2(int m)
    {
        int i=0;
        //2^i <=m
       while((1<<i) <= m)
       {
           i++;
       }
       return i-1;
    }
    int countSetBits(int n)
    {
        // Your logic here
        if(n==0)
        {
            return 0;
        }
        int x = closest_power_2(n);
        int f1 = x* (1<<(x-1)) ;
        int f2 = n - (1<<x) +1;
        int rec = n - (1<<x);
        int ans = f1 + f2 + countSetBits(rec);
        //see NB
        return ans;
    }