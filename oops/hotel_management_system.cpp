#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
class hotel
{
    public:
    string hname;
    int room;
    string location;
    float rating;
    int price;
};
class user:public hotel
{
    string uname;
    int uid;
    int ucost;
};
void print_hotel_data(vector<hotel> hotels)
{
    cout << "PRINT HOTELS DATA:" << endl;
    cout << "HotelName"
         << "   "
         << "Room Available"
         << "    "
         << "Location"
         << "    "
         << "Rating"
         << "    "
         << "PricePer Room:" << endl;
    for(int i=0;i<3;i++)
    {
        cout<<hotels[i].hname
         << "          "
         <<hotels[i].room
          << "                "
          <<hotels[i].location
           << "        "
           <<hotels[i].rating
        << "          "
        <<hotels[i].price
        << "          "<<endl;
    }
}
bool rating(hotel &a,hotel &b)
{
    return a.rating>b.rating;
}
void sort_by_rating(vector<hotel> hotels)
{
        cout<<"sorting by rating "<<endl;
        sort(hotels.begin(),hotels.end(),rating);
         for (int i = 0; i < hotels.size(); i++) {
        cout << hotels[i].hname << " "
             << hotels[i].room << " "
             << hotels[i].location << " "
             << hotels[i].rating << " "
             << " " << hotels[i].price
             << endl;
    }
    cout << endl;
}
bool sort_hn(hotel &a,hotel &b)
{   
    return a.hname>b.hname;

}
void sort_by_hname(vector<hotel> hotels)
{
    cout<<"sorting by hotel name "<<endl;
    sort(hotels.begin(),hotels.end(),sort_hn);
       for (int i = 0; i < hotels.size(); i++) {
        cout << hotels[i].hname << " "
             << hotels[i].room << " "
             << hotels[i].location << " "
             << hotels[i].rating << " "
             << " " << hotels[i].price
             << endl;
    }
    cout << endl;
    
}
void hotel_management(string hn[],int hroom[],string location[],int rat[],int price[],string uname[],int uid[],int ucost[])
{
    vector <hotel> hotels;
    hotel h;
    for(int i=0;i<3;i++)
    {
        h.hname=hn[i];
        h.location=location[i];
        h.price=price[i];
        h.rating=rat[i];
        h.room=hroom[i];
        hotels.push_back(h);
    }
    print_hotel_data(hotels);
    sort_by_rating(hotels);
    sort_by_hname(hotels);

}
int main()
{
    string hn[]={"gavkari","amrutulya","mcdonalds"};
    int hroom[]={4,5,6};
    string location[]={"bangalore","bangalore","mumbai"};
    int rat[]={2,5,4};
    int price[]={100,100,200};
    string uname[]={"u1","u2","u3"};
    int uid[]={2,3,4};
    int ucost[]={1000,1200,1100};
    hotel_management(hn,hroom,location,rat,price,uname,uid,ucost);
}