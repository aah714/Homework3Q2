//
// Created by ashle on 11/5/2021.
//

#ifndef HW3_Q2_TRIANGLE_H
#define HW3_Q2_TRIANGLE_H
#include "Polygon.h"

class Triangle:public Polygon{
public:
    Triangle();
    Triangle(int newWidth, int newHeight);
    int getArea();
    void draw();
private:

protected:


};


#endif //HW3_Q2_TRIANGLE_H
