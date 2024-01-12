#include<iostream>
#include<queue>
using namespace std;
#include<regex>



int main()
{   
    string mystr = "The mysterious portal stood before them, shimmering with an otherworldly glow. Curiosity compelled them to step forward, their hearts racing with anticipation. As they crossed the threshold, they were transported to a realm of vibrant colors and fantastical creatures. The portal's power seemed limitless, granting them access to distant lands and forgotten realms. With each portal they encountered, their sense of adventure grew, propelling them into new and exhilarating journeys. The portals became their gateways to discovery, unlocking the secrets of the universe and igniting their imaginations. No matter where they traveled, the portals reminded them that the world held infinite possibilities, just waiting to be explored.";
    regex mysch("p[a-tA-T']+");
    cout<<"input "<<mystr<<endl<<endl;
    cout<<regex_replace(mystr,mysch,"changed");
    return 0;
}