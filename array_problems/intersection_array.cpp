int findDuplicate(vector<int> &arr) 
{
    // Write your code here
    int n =sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i!=j & arr[i]==arr[j])
            {
                return arr[j];
            }
        }
    }
}
