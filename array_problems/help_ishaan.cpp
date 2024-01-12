//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
	public:
		int NthTerm(int N)
		{   int d1,d2;
		    for(int i = N;i<2*N;i++)
		    {
		      
		        if(i%2==0 and i%3 == 0 and i%5==0 and i%7==0)
		        {
		             d1 = N-i;
		            break;
		        }
		    }
		    for(int i=N;i>=2;i--)
		    {
		         if(i%2==0 and i%3 == 0 and i%5==0 and i%7==0)
		         {
		            d2 = i-N;
		            break;
		    
		             
		         }
	       	}
	       	
        }

        
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int N;
		cin >> N;
		Solution obj;
		int ans = obj.NthTerm(N);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends