#include<iostream>
#include "Rectangle.h"

using namespace std;
int main(){
    Rectangle rect;
    float l, w;
    cout << "enter length: ";
    cin >> l;
    cout << "enter width: ";
    cin >> w;
    // set the values using accessor methods
    rect.setlength(l);
    rect.setwidth(w);
    // output the Area
    cout <<" Area of Rectangle: " << rect.getArea() << endl;
    return 0;

}