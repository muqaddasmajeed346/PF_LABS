#include <iostream>
using namespace std;
// Function to swap two numbers using pointers
void swapNumbers(int* a, int* b) {
	int temp=*a;
    *a = *b;
    *b = temp;
}
int main() {
	
    int num1, num2;
    cout << "Enter first number: ";//10
    cin >> num1;

    cout << "Enter second number: ";//20
    cin >> num2;

    cout << "  Before swapping:  ";
    cout << "num1 = " << num1 << ", num2 = " << num2 << endl;

    // Call the function to swap using pointers
    
    swapNumbers(&num1, &num2);
    cout << "  After swapping:  ";
    cout << "num1 = " << num1 << ", num2 = " << num2 << endl;
    return 0;
}
