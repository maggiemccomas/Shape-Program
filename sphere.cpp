
/*
File name: sphere.cpp
Author: Maggie McComas
This C++ program inherits from Shape and adds its own data and methods in order to 
correctly compute the volume of a sphere.
*/
#include <string>
#include <iostream>
#include "sphere.h"
#include "shape.h"
#include "point.h"

using namespace std;

/*
Input: string type, string color, Point center, double radius
Output: none
Purpose: This function uses constructor chaining to initlialize the object as a sphere as well as its parent class shape 
*/
Sphere::Sphere(string type, string color, Point center, double radius) : Shape (type, color, center){
    this -> center = center;
    this -> radius = radius;
}

/*
Input: none
Output: returns the volume of the sphere as a double
Purpose: To compute the volume of a sphere
*/
double Sphere::compute_volume(void){

    return (3.14159 * radius * radius * radius * (4.0 / 3.0));
}
