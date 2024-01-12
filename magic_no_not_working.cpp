//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
    private:
    long long gcd( long long int a, long long int b)
    {
        if(a==0)
        {
            return b;
        }
        else
        {
            gcd(b%a,a);
        }
    }
    long long expo( long long int a, long long int b, long long int c)
    {
        if(a==0)
        {
            return 0;
        }
        if(b==0)
        {
            return 1;
        }
         long long int temp = expo(a,b/2,c);
        if(b%2==0)
        {
            return (temp*temp)%c;
        }
        else
        {
            return (a*temp*temp)%c;
        }
    }
  public:
    long long getVal(int N, int A[]) {
        long long int a=1,b;
       for(int i=0;i<N;i++)
       {
          a=a*A[i]; 
       }
        long long int result=A[0];
       for( long long int i=1;i<N;i++)
       {
           result=gcd(result,A[i]);
           if(result==1)
           {
               b=1;
           }
       }
       b=result;
        long long int c=1000000007;
       long long int ans=expo(a,b,c);
       return ans;
       
       
       
       
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;
        int A[N];
        
        for(int i=0 ; i<N ; i++)
            cin>>A[i];

        Solution ob;
        cout << ob.getVal(N,A) << endl;
    }
    return 0;
}
// } Driver Code Ends