#include <iostream>
using namespace std;
int add(int a, int b); // function prototype
int main() {
    cout<< add(5,6);
}
int add(int a, int b){ // function definition
    return a + b ;
}
