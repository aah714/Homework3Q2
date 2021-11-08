/****************************************************
 * Author:              Ashley Howard
 * Program:             hw3, q2
 * Date Created:        Wednesday, October 27, 2021
 * Date Last Modified:  Friday, November 5, 2021
 * **************************************************/


#include <iostream>
#include "Rectangle.h"
#include "Triangle.h"
using namespace std;


int main()
{
    Triangle t1(5, 9);
    Rectangle r1(5,9);
    cout<<"The area of a Triangle is " << t1.getArea() << "." <<endl;
    cout<<"The area of a Rectangle is " << r1.getArea() << "." <<endl;

    cout<<"Picture of Triangle: " << endl;
    t1.draw();

    cout<<"Picture of Rectangle: " <<endl;
    r1.draw();

    t1.setHeight(4);
    t1.setWidth(4);
    r1.setHeight(6);
    r1.setWidth(6);

    cout<<"The area of a Triangle is " << t1.getArea() << "." <<endl;
    cout<<"The area of a Rectangle is " << r1.getArea() << "." <<endl;

    cout<<"Picture of Triangle: " << endl;
    t1.draw();

    cout<<"Picture of Rectangle: " <<endl;
    r1.draw();

    //QUESTION 1:
    //Polygon p1(2, 3);   error: cannot declare variable 'p1' to be of abstract type 'Polygon'
    //because it is a pure virtual function in the polygon class


    //QUESTION 2
    //Polygon p2(3,4); //no definition for getArea in draw in polygon.cpp
    //CMakeFiles\HW3_q2.dir/objects.a(Polygon.cpp.obj):Polygon.cpp:(.rdata$.refptr._ZTV7Polygon[.refptr._
    // ZTV7Polygon]+0x0): undefined reference to `vtable for Polygon'




    return 0;

}
