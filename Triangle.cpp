//
// Created by ashle on 11/5/2021.
//

#include "Triangle.h"
using namespace std;
#include <iostream>

Triangle::Triangle():Polygon(){

}

Triangle::Triangle(int newWidth, int newHeight):Polygon(newWidth, newHeight){

}

int Triangle::getArea(){
    int area=(width*height)/2;
    return area;
}

void Triangle::draw(){
    for(int i=1; i<=height; i++){
        for(int j=1; j<=(height-i); j++){
            cout<<" ";
        }
        for(int k=1; k<=((2*i)-1); k++){
            cout<<"*";
        }
        cout<<endl;
    }
}