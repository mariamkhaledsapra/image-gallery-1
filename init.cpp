#include <iostream>
using namespace std;
#include "Image.hpp"


int main()
{       
    Image ice_cream = Image ("ice_cream");
    ice_cream.display();
    // cout<<"-------------"<<endl;
    Image boat = Image ("boat");
    boat.display();
    return 0;
}