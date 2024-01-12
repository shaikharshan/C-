#include<algorithm>
#include<iostream>
using namespace std;

//default copy cons does shallow copy in char array
//i.e if we change original copied  gets changed too 



class Hero
{
    int health;
   
    public:
    char *name;

     char level;
     int gethealth()
    {
        return health;
    }   
    void sethealth(int health)
    {
        this->health=health;
    }
    Hero(Hero& temp)
    {
        //deep copy
        //on making a char array of name 'name'
        // char *ch = new char[strlen(temp.name)+1];
        //strcpy(ch,temp.name)
        //this->name=ch;
        this->health=temp.health;
        this->level=temp.level;
    }
    Hero()
    {
        cout<<"called";
    }
    void print()
    {
        cout<<this->health<<" ";
        cout<<this->level<<" "<<endl;
    }

};
int main()
{
    Hero h1;
    h1.sethealth(70);
    h1.level='A';
    Hero h2(h1);
    h1.level='b';
    h1.print();
    h2.print();



}