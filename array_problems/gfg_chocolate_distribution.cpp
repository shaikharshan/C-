// Given an array A[ ] of positive integers of size N, where each value represents the number of chocolates in a packet. Each packet can have a variable number of chocolates. There are M students, the task is to distribute chocolate packets among M students such that :
// 1. Each student gets exactly one packet.
// 2. The difference between maximum number of chocolates given to a student and minimum number of chocolates given to a student is minimum.
#include<iostream>
#include<vector>
#include<algorithms>
using namespace std;
 long long findMinDiff(vector<long long> a, long long n, long long m){
    //code
    sort(a.begin(),a.end());
    long long s=0;
    long long e = m-1;
    long long dif=0;
    long long maxdif=INT_MAX;
    while(e<n)
    {
        dif = a[e]-a[s];
        if(dif<maxdif)
        {
            maxdif = dif;
        }
        s++;
        e++;
        
    }
    return maxdif;
    
    }   











