#include <iostream>
using namespace std;
int main() {
    // declare pointer and initialize it
    // so that is does not store a random variable
    int* pPointer = nullptr;
    int integervar = 5;

    // assign pointer to addsress of objects
    pPointer = &integervar;
    // output the value of integervar
    cout<<"integervar is: " << integervar<<endl;
    //output the address of intervar
    cout<<"the address of integervar is: "<< &integervar << endl;
    //output the address assigned to pPointer
    cout<<"address of pPointer is: " <<pPointer <<endl;
    // output the address of pPointer
    cout<<"the address of pPointer is :"<< &pPointer << endl;
    return 0;
}