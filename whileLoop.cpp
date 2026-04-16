#include <iostream>
using namespace std;

int main (){
    int x;
   
    cout << " enter a number between 5 and 10 :" << endl;
    cin>> x;
    while ( x < 5 || x > 10){
        //cout << x << endl;
        cout <<" sorry, you entered an invalid number, please try another number!" << endl;
        cin >> x;
        
        
    }
        cout << " your input " << x <<" has been accepted" << endl;
        
    return 0;
}