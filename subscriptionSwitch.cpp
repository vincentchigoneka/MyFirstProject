#include <iostream>
using namespace std;
int main(){
    srand(time (0));

    int daysUntilExpiration = rand() %12;

    switch (daysUntilExpiration){
    case 0:
         cout<<"You have an active Subscription. Thank you!" << endl;
         break;
    case 1:
         cout<<"Your subscription expires within aday!" << endl; 
         cout<< " Renew now and save 20%!" << endl;
         break;
    case 2:
    case 3:
    case 4:
    case 5:
         cout <<" Your subscription expires in " <<daysUntilExpiration << " days.";
         cout << "Renew now and save 10%!" << endl;
         break;
    case 7:
    case 8:
    case 9:
    case 10:
        cout << "Your subscription will expire soon. Renew now! " << endl;
        break;
    default:
        cout << " Your subscription has expired ." << endl;
           
    }
    return 0;

}