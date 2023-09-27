
/*
File name: point.h
Author: Maggie McComas
Header file containing declarations for point.cpp
*/
#ifndef POINT_H
#define POINT_H
#include <iostream>

using namespace std;

class Point{
    
    private:
      double x;
      double y;
      double z;

      /*
      Input: double x, double y, double z
      Output: none
      Purpose: sets this.x, this.y, and this.z equal to the given parameters
      Is called by Point constructor when given parameters
      */
      inline void set (double x, double y, double z){
        this -> x = x;
        this -> y = y;
        this -> z = z;  
      };
    

    public:

      /*
      Input: none
      Output: double ret
      Purpose: To compute and return the length of the point vector
      */
      double length ();

      /*
      Input: none
      Output: none
      Purpose: default Point constructor when given no valurs , values are set to 0.
      */
      Point(){};

      /*
      Input: double x, double y, double z
      Output: none
      Purpose: Point constructor with paramenters that calls the set function to set this.x,
      this.y, and this.z equal to the given parameters.
      */
      Point (double x, double y, double z) { set (x, y, z); };

      /*
      Input: Point& p
      Output: Point ret
      Purpose: to overload the subtraction operator to compute *this - p for efficiency
      */
      Point operator- (Point& p);

      /*
      Input: none
      Output: print statement
      Purpose: to print the Point as given
      */
      void print (void);
};

#endif