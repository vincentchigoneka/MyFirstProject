#include <iostream>
#include <string>
using namespace std;

int main(){
    string array[8] = {"B123","C234","A345","C15","B177","G3003","C235","B179"};
    for (int i = 0; i <= 7; i++){
        cout << array[i] << endl;
    }
    {
    cout << " " << endl;
    }
    cout << array[0] << endl;
    cout << array[4] << endl;
    cout << array[7] << endl;
    return 0;

}