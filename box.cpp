
/*
File name: box.cpp
Author: Maggie McComas
This C++ program inherits from Shape and adds its own data and methods in order to 
correctly compute the volume of a box as well as display its colors.
*/
#include <string>
#include <iostream>
#include "box.h"
#include "shape.h"
#include "point.h"

using namespace std;

/*
Input: string type, string color, string tbcolor, double length, double width, double height, Point loc
Output: none
Purpose: This function uses constructor chaining to initlialize the object as a box as well as its parent class shape
*/
Box::Box(string type, string color, string tbcolor, double length, double width, double height, Point loc) : Shape (type, color, loc){
    this -> length = length;
    this -> width = width;
    this -> height = height;
    this -> tbcolor = tbcolor;
}

/*
Input: none
Output: a print statment
Purpose: Prints the side and top and bottom colors of the box object
*/
void Box::print_color(void){
    cout << "Side Color: " << color << "  Top/Base Color: " << tbcolor;
}

/*
Input: none
Output: returns the volume of the box as a double
Purpose: To compute the volume of a box
*/
double Box::compute_volume(void){
    return (length * width * height);
}