/*
 	Title:             inputEx1.cpp	
 	Author:            April R. Crockett
 	Date of Creation:  June 27, 2022
	Last Updated:	   Apr. 24, 2026
 	Purpose:           This program asks the user to enter the length and 
                       width of a rectangle. It calculates the 
 					   rectangle's area and displays the value on the 
    				   screen.
 */

#include <iostream>
using namespace std;
  
int main()
{
   //variable definitions
   int length, width, area;
   
   //what is stored in length, width, & area before reading in from user?
   cout << "length is " << length << endl;
   cout << "width is " << width << endl;
   cout << "area is " << area << endl;
   
   //get INPUT from the user
   cout << "\nThis program calculates the area of a ";
   cout << "rectangle.\n";
   cout << "What is the length of the rectangle? ";
   cin >> length;
   cout << "What is the width of the rectangle? ";
   cin >> width;
   
   area = length * width; //CALCULATE the area
      
   //OUTPUT the result
   cout << "The area of the rectangle is " << area << ".\n";
   
   return 0;
}







