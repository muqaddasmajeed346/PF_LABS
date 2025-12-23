//Write a C++ program that takes an integer (1-7) as input and uses a
//switch statement to display the corresponding day of the week (e.g.,
//1 for Monday, 2 for Tuesday, etc.). If the number is not in the range
//of 1 to 7, display an error message.


#include<iostream>
using namespace std;
int main()
{
    int day;

    cout << "Enter a number (1-7): ";
    cin >> day;

    switch (day) {
        case 1:
            cout << "Monday";
            break;
        case 2:
            cout << "Tuesday";
            break;
        case 3:
            cout << "Wednesday";
            break;
        case 4:
            cout << "Thursday";
            break;
        case 5:
            cout << "Friday";
            break;
        case 6:
            cout << "Saturday";
            break;
        case 7:
            cout << "Sunday";
            break;
        default:
            cout << "Error: Please enter a number between 1 and 7.";
    }

    return 0;
}
