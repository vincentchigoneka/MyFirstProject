#include"Rectangle.h"
// constructor
Rectangle::Rectangle(){
    length = 0;
    width  = 0;
}
// destructor
Rectangle::~Rectangle(){
    // does nothing
}
//setters
void Rectangle::setlength(float l){
    length =  l;
}
void Rectangle::setwidth(float w){
    width = w;
}
//getters
float Rectangle::getlength()const{
    return length;
}
float Rectangle::getwidth()const{
    return width;
}
// Area calculation
float Rectangle::getArea()const{
    return length * width;
}