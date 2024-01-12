#include <iostream>
using namespace std;
//luhn algo from right to left double every second digit , make it single , add with remaining digits-> if resulting no. divisible by 10 _>valid
int sum_digits(int d)
{
    int sum=0;
    while(d!=0)
    {
        int rem = d%10;
        sum=sum+rem;
        d=d/10;
    }
    return sum;
}
int main()
{
    long long int num;
    cout<<"enter credit card number";
    cin>>num;
    int cn=num;
    int fsum=0;
    int cnt=0;
    while(cn!=0)
    {
        int rem=cn%10;
        cnt++;
        if(cnt%2==0)
        {
            rem=2*rem;
            int frem = sum_digits(rem);
            fsum=fsum+frem;
        }
        fsum=fsum+rem;
        cn=cn/10;
    }
    if(fsum%10==0)
    {
        cout<<"VALID"<<endl;
    }
    else{
        cout<<"INVALID";
    }
    return 0;


}