
/*
File name: box.h
Author: Maggie McComas
Header file containing declarations for box.cpp
*/
#ifndef BOX_H
#define BOX_H

#include <string>
#include "shape.h"
#include "point.h"

using namespace std;

class Box : public Shape {

    private:
        double length;
        double width;
        double height;
        string tbcolor;

        /*
        Input: none
        Output: a print statment
        Purpose: Prints the side and top and bottom colors of the box object
        */
        void print_color(void);

        /*
        Input: none
        Output: returns the volume of the box as a double
        Purpose: To compute the volume of a box
        */
        double compute_volume(void);

        //void print_type (void) { cout << "should never be called" << endl; }


    public:
         /*
        Input: string type, string color, string tbcolor, double length, double width, double height, Point loc
        Output: none
        Purpose: This function uses constructor chaining to initlialize the object as a box as well as its parent class shape
        */
        Box(string type, string color, string tbcolor, double length, double width, double height, Point loc);
};

#endif