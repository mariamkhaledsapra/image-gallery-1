#include <iostream>
using namespace std;
#include "Image.hpp"


int main()
{       
    Image ice_cream = Image ("ice_cream");
    ice_cream.display();
    Image boat = Image ("boat");
    boat.display();
    Image ghost = Image ("ghost");
    ghost.display();
    Image pizza= Image ("pizza");
    pizza.display();
    return 0;
}