//
// Created by ashle on 11/5/2021.
//

#include "Rectangle.h"
#include <iostream>
using namespace std;


Rectangle::Rectangle():Polygon(){
}

Rectangle::Rectangle(int newWidth, int newHeight):Polygon(newWidth, newHeight){
}

int Rectangle::getArea(){
    int area=width*height;
    return area;
}

void Rectangle::draw() {
    for (int i=0; i<height; i++){
        for (int j=0; j<width; j++){
            cout<<"*";
        }
        cout<<endl;
    }

}