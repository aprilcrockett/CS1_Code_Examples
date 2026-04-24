/*
	Title:  		variableAssignment.cpp
	Author:  		April Crockett
	Date:  			5-30-2017
	Last Updated: 	2/26/2025
	Purpose:  		Demonstrates different ways to initialize variables and
					variable assignment statements.
*/
#include<iostream>
using namespace std;

int main()
{
	int number = 5; //initialization statement
	int length(20); //another way to initialize a variable
	int width, height, depth = 2, num = 48;

	width = 47; //assignment statement
	height = 28; //assignment statement
	cout << endl << "The value of number is "<< number << endl;
	cout << "Width: " << width << ", Length: " << length;
	cout << ", Height: " << height << ", Depth: " << depth << endl;
	
	cout << "The value of num is: " << num << endl;
	num = 7; //changing the value in num
	cout << "The value of num after assigning 7 is: " << num << endl;
	
	25 = num;//is this correct way to assign a value?
	cout << "The value of num after asigning 25 is " << num << endl;
	
	return 0;
}


















