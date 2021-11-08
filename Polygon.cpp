#include "Polygon.h"

Polygon::Polygon()
{
    height=0;
    width=0;
}

Polygon::Polygon(int newWidth, int newHeight){
    width = newWidth;
    height = newHeight;

}


void Polygon::setWidth(int newWidth){
    width = newWidth;

}


void Polygon::setHeight(int newHeight){
    height = newHeight;

}


