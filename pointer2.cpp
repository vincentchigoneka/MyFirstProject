#include <iostream>
using namespace std;

int main(){
    // declare two variables.
    int firstValue;
    int secondValue;

     // declare apointer
     int* pPointer = nullptr;
     // assign pointer with the address of firstValue
     pPointer = &firstValue;
     *pPointer = 10; // indirection
     // assign pointer with the address of the secondValue
     pPointer = &secondValue;
     *pPointer = 20; // indirection
     // out both values
     
     cout<<"the firstValue is: " << firstValue<<'\n';
     cout<<"the secondValue is: " << secondValue<<'\n';
     return 0;

} 