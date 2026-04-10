#include <iostream>
using namespace std;

int main() {
    int numbersArray[5];
    int* pPointer = nullptr;

    // assign the addres of the first element to the pointer
    pPointer = numbersArray;
    *pPointer = 10; // indirction or assign a value to the first element
    
    /*increment the pointer using pointer arithmetic to assign 
    the address of the second element to the pointer*/
    pPointer++;
    *pPointer = 20; // indirection " second element"
    
    // assign the pointer of the third  element to the pointer
    pPointer = &numbersArray[2];
    *pPointer = 30; // indirection

    /*assign address of the fourth element to the pointer
     using pointer arithmetic*/
     pPointer = numbersArray + 3;
     *pPointer = 40; // indirection
     // assign address to the first element to the pointer
     pPointer= numbersArray;
     /* assign value to the fifth element using
      indirection and pointer arithmetic*/
      *(pPointer + 4)= 50;
      // iterate and output all elements in the array
      for (int n = 0; n<5; n++){
        cout<< numbersArray[n] << ", ";
      }
      return 0;
    


}