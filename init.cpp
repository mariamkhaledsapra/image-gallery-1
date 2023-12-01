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
    Image water_melon = Image ("water_melon");
    water_melon.display();
    Image heart = Image ("heart");
    heart.display();
    Image star = Image ("star");
    star.display();
    Image tree = Image ("tree");
    tree.display();
    Image bunny = Image ("bunny");
    bunny.display();

    return 0;
}