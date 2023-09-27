
/*
File name: shape.h
Author: Maggie McComas
Header file containing declarations for shape.cpp
*/
#ifndef SHAPE_H
#define SHAPE_H

#include <string>
#include "point.h"

using namespace std;

class Shape{

    private:
        string type;
        Point loc;
        
    protected:
        string color;

        /*
        Input: string type, string color, Point loc
        Output: none
        Purpose: the constructor that sets the parameters given to the class variables
        */
        Shape(string type, string color, Point loc);

    public:
        Shape* next;

        /*
        Input: none
        Output: print statement
        Purpose: virtual function that prints a label as well as the shape's color.
        Default implementaton in the base class, but certain shape classes override this
        because they have more then one color.
        */
        virtual void print_color(void);

        /*
        Input: none
        Output: double volume
        Purpose: a pure virtual method that each subclass implements in order to find the volume of
        their specific shape
        */
        virtual double compute_volume(void) = 0;

        /*
        Input: none
        Output: print statement
        Purpose: regular class method that prints out the location of the shape
        */
        void print_loc(void);

        /*
        Input: none
        Output: print statement
        Purpose: regular class method that prints out the shape type
        */  
        void print_type(void);
};

#endif