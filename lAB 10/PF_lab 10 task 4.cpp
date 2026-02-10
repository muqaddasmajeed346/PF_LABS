#include <iostream>
using namespace std;
int main() {
    int num;
    int fact = 1;
    cout << "Enter a number: ";
    cin >> num;
    //factorial=5x4x3x2x1
    if (num < 0) {
        cout << "Factorial of negative numbers is not defined." << endl;
    } else {
        for (int i = 1; i <= num; i++) {
            fact *= i;
        }
        cout << "Factorial of " << num << " is: " << fact << endl;
    }
    
   return 0; 
}

