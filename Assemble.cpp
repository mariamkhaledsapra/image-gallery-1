#include "list.h"

void programFunctions() {
    int List=0;
    int image=0;
	cin>>image;
    drawPicture(image);
    list.add(image);
    checkInput(list, image);
 }