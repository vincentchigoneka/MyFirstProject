#include <iostream>
#include "Lectangle.h"
#include "Triangle.h"

using namespace std;

int main(){
    Lectangle lect;
    Triangle trgl;
    lect.SetValues(4,5);
    trgl.SetValues(4,5);
    cout << lect.Area() << '\n';
    cout << trgl.Area() << '\n';
    return 0;
    
}