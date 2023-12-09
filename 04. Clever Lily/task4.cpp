#include <iostream>
#include <iomanip>
using namespace std;
 

 int main() {
    int years, priceToy, savings, presentMoney, counterOddBdays;

    double priceWoshingMachine;

    cin >> years >> priceWoshingMachine >> priceToy;


    counterOddBdays = 0;
    presentMoney = 0;

    for ( int year = 1; year <= years; year++){

        if( year % 2 == 0){
            presentMoney += ((year / 2) * 10) - 1;
        }else{
            counterOddBdays += 1;
        }
    }

    savings = presentMoney + (counterOddBdays * priceToy);

    cout << fixed << setprecision(2);
    
    if (savings >= priceWoshingMachine){
        cout << "Yes! " << savings - priceWoshingMachine <<endl;
    } else {
        cout << "No! " << priceWoshingMachine - savings << endl;
    }

 }