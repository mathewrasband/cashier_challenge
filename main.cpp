//
//  main.cpp
//  cashier_challenge
//
//  Created by Mathew Rasband on 4/7/21.
//

#include <iostream>
using namespace std;

int main() {
   
    double itemPrice     = 0.0;
    double paymentAmount = 0.0;
    int numDollars       = 0;
    int numQuarters      = 0;
    int numDimes         = 0;
    int numNickels       = 0;
    int numPennies       = 0;
    double change        = 0.0;
    char response          = 'y';
    int numCoins         = 0;
    
    while (response == 'y' || response == 'Y'){
        cout << "Enter item price: " << endl;
        cin >> itemPrice;
        cout << "Enter amount paid: " << endl;
        cin >> paymentAmount;
        
        change = paymentAmount - itemPrice;
        numDollars = change;
        numCoins = (change * 100) - (numDollars * 100);
        numQuarters = numCoins / 25;
        numCoins = numCoins % 25;
        numDimes = numCoins / 10;
        numCoins = numCoins % 10;
        numNickels = numCoins / 5;
        numCoins = numCoins % 5;
        numPennies = numCoins;
        
        cout << "Your change will come out to " << numDollars << " dollars, " << numQuarters << " quarters, " << numDimes << " dimes, " << numNickels << " nickels and " << numPennies << " pennies." << endl;
        cout << "Would you like to make another purchase? (y/n) " << endl;
        cin >> response;
    }
    
    return 0;
}
