#include <iostream>
using namespace std;

int main() {
    double salary;
    int yearsOfExperience;

    // Input salary and experience
    cout << "Enter your annual salary: ";
    cin >> salary;

    cout << "Enter your years of work experience: ";
    cin >> yearsOfExperience;

    // Check loan eligibility
    if (salary >= 25000) {
        cout << "You are eligible for the loan." << endl;
    } 
    else if (salary >= 20000 && yearsOfExperience > 5) {
        cout << "You are eligible for the loan." << endl;
    } 
    else {
        cout << "You are not eligible for the loan." << endl;
    }

    return 0;
}
