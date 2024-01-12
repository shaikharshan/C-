//getter,setter
#include<iostream>
using namespace std;
class student
{
    private:
        int id;
    public:
    void setid(int s)
    {
        id=s;
    }
    int getid()
    {
        return id;
    }
};    
int main()
{
    student s1;
    s1.setid(27732);
    cout<<s1.getid();
    return 0;

}