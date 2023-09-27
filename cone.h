#ifndef CONE_H
#define CONE_H

#include <string>
#include "shape.h"
#include "point.h"

using namespace std;


class Cone : public Shape {

   private:
      Point center, apex;
      double radius;
      string bcolor;

   public:
      Cone (string type, string color, string bcolor, Point center, Point apex, double radius);

      void print_color (void);

      double compute_volume (void);

      void print_type (void) { cout << "should never be called" << endl; }
};

#endif
