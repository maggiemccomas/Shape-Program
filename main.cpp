
/*
File name: main.cpp
Author: Maggie McComas
A C++ program that works with shapes and exhibits the four main features of OO programing:
encapsulation, inheritance, polymorphism, and dynamic method binding
*/
#include <string>
#include <iostream>
#include "sphere.h"
#include "box.h"
#include "cone.h"
#include "shape.h"
#include "point.h"

using namespace std;

/*
Input: Shape **list
Output: none
Purpose: to read in input and create new Shape nodes as well as properly link them 
in a linked list
*/
void read_objs(Shape **list){
    Shape *node;
    double x, y, z, xx, yy, zz, radius;
    string type, color, color2;

    *list = NULL;

    while (cin >> type){

        if (type.compare("sphere") == 0){
            cin >> x >> y >> z >> radius >> color;

            node = new Sphere(type, color, Point (x, y, z), radius);
        }
        else if (type.compare("box") == 0){
            cin >> xx >> yy >> zz >> x >> y >> z >> color >> color2;

            node = new Box(type, color, color2, xx, yy, zz, Point(x, y, z));
        }
        else if (type.compare("cone") == 0){
            cin >> x >> y >> z >> xx >> yy >> zz >> radius >> color >> color2;

            node = new Cone(type, color, color2, Point(x, y, z), Point(xx, yy, zz), radius);
        }
        
        node->next = *list;
        *list = node;
    }
}

/*
Input: Shape *list
Output: print statements
Purpose: prints the type, color, location, and volume for each element in the list
*/
void print_objs(Shape *list){
    Shape* cur;
    cur = list;
    double volume;

    while (cur != NULL){
        cur->print_type();
        cur->print_color();
        cout << endl;
        cur->print_loc();
        volume = cur->compute_volume();
        cout << "Volume: " << volume << "\n\n";
        cur = cur->next;
    }
}

/*
Input: none
Output: none
Purpose: to call the functions read_objs and print_objs as well as loops through the 
Shape linked list and returns the allocated space to the system after it is no longer needed
*/
int main(){

    Shape *list;

    read_objs(&list);

    cout << "Objects:\n\n";

    print_objs(list);
    
    Shape *temp;

    while (list != NULL){
        temp = list->next;
        delete list;
        list = temp;
    }
    delete temp;

    return(0);
}