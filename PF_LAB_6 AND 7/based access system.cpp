#include <iostream>
#include <string>
using namespace std;

int main() {
    string username, password, role;

    // Input login credentials
    cout << "Enter username: ";
    cin >> username;
    cout << "Enter password: ";
    cin >> password;

    // Authentication check
    if (username == "admin" && password == "password123") {
        cout << "Authentication Successful!" << endl;

        // Input role
        cout << "Enter your role (Admin / Guest / Other): ";
        cin >> role;

        // Role-based access control
        if (role == "Admin" || role == "admin")
            cout << "Full Access" << endl;
        else if (role == "Guest" || role == "guest")
            cout << "Limited Access" << endl;
        else
            cout << "No Access" << endl;

    } else {
        cout << "Authentication Failed. Access Denied." << endl;
    }

    return 0;
}
