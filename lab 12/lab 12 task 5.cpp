#include <iostream>
using namespace std;

// Function to compute factorial using a loop
    int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
    	fact=fact*i;
    }
    return fact;
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;
    factorial(number);
    cout << "Factorial of " << number << " is " << factorial(number) << endl;
    return 0;
}
