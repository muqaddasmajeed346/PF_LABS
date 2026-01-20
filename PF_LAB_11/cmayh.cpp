#include <iostream>
#include <cmath>   // Library functions
using namespace std;

int main() {
    double num;

    // Input from user
    cout << "Enter a number: ";
    cin >> num;

    // Using library functions
    cout << "Square Root: " << sqrt(num) << endl;
    cout << "Absolute Value: " << abs(num) << endl;
    cout << "Sin: " << sin(num) << endl;
    cout << "Cos: " << cos(num) << endl;
    cout << "Power of 3: " << pow(num,3) << endl;

    return 0;
}
