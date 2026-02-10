#include <iostream>
using namespace std;

int main() {
    // Predefined customer data
    double balance = 350.00;   // Account balance
    bool isLoyal = true;       // 1 = loyal, 0 = not loyal

    // Determine account type using ternary operator
    string accountType =(balance < 100) ? "Low Balance Account" :(balance >= 100 && balance <= 500) ? "Standard Account" : "Premium Account";
    // Determine special offer eligibility using ternary and logical operators
    
    string specialOffer =(balance > 200 && isLoyal) ? "Eligible for Special Offer" : "Not Eligible for Special Offer";
    // Output results
    cout << "Account Type: " << accountType << endl;
    cout << "Special Offer Status: " << specialOffer << endl;

    return 0;
}
