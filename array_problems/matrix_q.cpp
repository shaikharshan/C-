 #include <iostream>
using namespace std;
#include<vector>
int main()
{
  vector<int> ans;
        int j=0;
        int i=0;
        int num=0,sum=0;
        int row;
       while(i<N && j<N)
       {
           
           if(mat[j][i]==1)
           {
               num=N-i;
               if(num>sum)
               {
               row=j;
               sum=num;
                   
               }
               j++;
               i=0;
           }
           
       }
       ans.push_back(row);
        ans.push_back(sum);
        return ans;
}