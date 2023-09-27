
/*
File name: point.cpp
Author: Maggie McComas
This C++ program is used to store 3D points (x, y, and z)
*/
#include "point.h"
#include <cmath>
#include <iostream>

using namespace std;

/*
Input: none
Output: double ret
Purpose: To compute and return the length of the point vector
*/
double Point::length(){
    double ret = (x * x) + (y * y) + (z * z);
    ret = sqrt(ret);
    return ret;
}

/*
Input: Point& p
Output: Point ret
Purpose: to overload the subtraction operator to compute *this - p for efficiency
*/
Point Point::operator-(Point& p){
    Point ret = *this;

    ret.x = x - p.x;
    ret.y = y - p.y;
    ret.z = z - p.z;

    return ret;

}

/*
Input: none
Output: print statement
Purpose: to print the Point as given
*/
void Point::print(void){
    cout << "x: " << x << " y: " << y << " z: " << z << endl;
}



