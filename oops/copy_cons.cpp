#include<algorithm>
#include<iostream>
using namespace std;
class Hero
{
    public:
    int health;
    char level;
    //manual copy constructer
    Hero(Hero& temp) //improtant
    {
        this->health=temp.health;
        this->level=temp.level;

    }
    void print()
    {
        cout<<"health "<<this->health<<endl;
        cout<<"level "<<this->level<<endl;

    }
};
int main()
{
    Hero s;
    s.health=70;
    s.level='a';
    Hero r(s); // copy constructer
    r.print();
}