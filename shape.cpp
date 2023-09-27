
/*
File name: shape.cpp
Author: Maggie McComas
This C++ program is the base class for the three basic 3D shapes (sphere, box, and cone)
*/
#include <string>
#include <iostream>
#include "shape.h"
#include "point.h"

using namespace std;

/*
Input: string type, string color, Point loc
Output: none
Purpose: the constructor that sets the parameters given to the class variables
*/
Shape::Shape(string type, string color, Point loc){
    this -> type = type;
    this -> color = color;
    this -> loc = loc;
}

/*
Input: none
Output: print statement
Purpose: default implementation of the print_color function that prints a 
label as well as the shape's color
*/
void Shape::print_color(void){
    cout << "Color: "  << color;
}

/*
Input: none
Output: print statement
Purpose: regular class method that prints out the shape type
*/
void Shape::print_type(void){
    cout << "Name: "  << type << endl;
}

/*
Input: none
Output: print statement
Purpose: regular class method that prints out the location of the shape
*/
void Shape::print_loc(void){
    cout << "Location: ";
    loc.print();
}