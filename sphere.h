
/*
File name: sphere.h
Author: Maggie McComas
Header file containing declarations for sphere.cpp
*/
#ifndef SPHERE_H
#define SPHERE_H

#include <string>
#include "shape.h"
#include "point.h"

using namespace std;


class Sphere : public Shape {

    private:
        Point center;
        double radius;

        /*
        Input: none
        Output: returns the volume of the sphere as a double
        Purpose: To compute the volume of a sphere
        */
        double compute_volume (void);

        //void print_type (void) { cout << "should never be called" << endl; }
    
    
    public:

        /*
        Input: string type, string color, Point center, double radius
        Output: none
        Purpose: This function uses constructor chaining to initlialize the object as a sphere as well as its parent class shape 
        */
        Sphere (string type, string color, Point center, double radius);
};

#endif