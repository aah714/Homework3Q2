//
// Created by ashle on 11/5/2021.
//

#ifndef HW3_Q2_RECTANGLE_H
#define HW3_Q2_RECTANGLE_H
#include "Polygon.h"

class Rectangle:public Polygon{
public:
    Rectangle();
    Rectangle(int newWidth, int newHeight);
    int getArea();
    void draw();
private:

protected:
};


#endif //HW3_Q2_RECTANGLE_H
