#include <iostream>
using namespace std;
#define KEY_RIGHT 77
#define KEY_LEFT 75 //Fixed key values
#include "list.h" //Calling an external file containing classes
#include <vector> //library responsible for printing stars through 1 and 0
#include <conio.h> //library responsible for functions for input and output from the getch() function via the keyboard

void checkInput();

int main()
{
    cout << "_____**** Welcome to your gallery______****" << endl;
    cout << "We will show you some numbered images, and you must choose the number of the image that is presented to you" << endl;
    myInput();
    List list = List(0);
    int image=0;
	cin>>image;
    drawPicture(image);
	list.add(image);
	int continu = 1;
    while(continu=1 ){
		     myInput()       
	         cin>>image;
	         checkInput(list, image);
	         list.add(image);
	         drawPicture(image);
    if (continu > -1) {
        cout<<image=-1;
        return 0;}
	    continu++;
    }
	
	return 0;
}

void checkInput(List &l, int image){
    programFunctions()
	int arrow = 0; 
    while(1) //1 means it is correct and enter loop
    {
		draw(list.getNext()->data); //The number calls up the image it wants to display which was previously stored in the list
          arrow = 0;
             switch((arrow=getch())) { 
                 case KEY_LEFT: 
                      cout << endl << "Left" << endl; 
                 case KEY_RIGHT:
                       cout << endl << "Right" << endl;  
			     case 1:
                     checkInput(list, image);
	                  list.add(image);          
                 case 2:
                     checkInput(list, image);
	                 list.add(image);   
                 case 3:
                    checkInput(list, image);
	                list.add(image);   
                 case 4:
                   checkInput(list, image);
	               list.add(image);               
				 case 5:
				  checkInput(list, image);
	              list.add(image);   
                 case-1:
                  cout<<"Exiting the program";
             default: // Do not enter previously specified stock values 75 or 77 or arrows Or a number other than the image numbers
                        cout << endl << "null" << endl; 
              break;
    }
        }
}