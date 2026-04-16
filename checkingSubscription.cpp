#include <iostream>
using namespace std;
int main(){
    srand(time (0));

    int daysUntilExpiration = rand() %12;
    if (daysUntilExpiration == 1){
        cout<<"Your subscription expires within aday!" << endl;
         cout<<"Renew now and save 20%" << endl;

    }
    else if (daysUntilExpiration >=2 && daysUntilExpiration <= 5){
         cout<<"Your subscription expire in" << daysUntilExpiration <<"Renew now and save 10%"<< endl;
    }
    else if (daysUntilExpiration >= 6 && daysUntilExpiration <=10){
         cout<<"Your subscription expire soon. Renew now" << endl;
    }
    else if(daysUntilExpiration == 0){
         cout<<"You have an active subsription thank you" << endl;
    }
    else{
         cout<<"Your subscription has expired" << endl;
    }
    return 0;
}
