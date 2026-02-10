#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int category, item, quantity;
    float price = 0, subtotal, discount = 0, total;

    cout << "-----SHOPPING SYSTEM----"<<endl;
    cout << "Select Category:"<<endl;
    cout << "1. Electronics"<<endl;
    cout << "2. Clothing"<<endl;
    cout << "3. Groceries"<<endl;
    cout << "Enter choice: "<<endl;
    cin >> category;

    switch (category) {
        case 1: // Electronics
            cout << "Electronics Items:";
            cout << "1. Laptop ($1000)";
            cout << "2. Smartphone ($700)";
            cout << "3. Headphones ($150)";
            cout << "Select item: ";
            cin >> item;

            switch (item) {
                case 1: price = 1000; break;
                case 2: price = 700; break;
                case 3: price = 150; break;
                default:
                    cout << "Invalid item selection";
                    return 0;
            }
            break;

        case 2: // Clothing
            cout << "Clothing Items:";
            cout << "1. Jacket ($120)";
            cout << "2. T-shirt ($40)";
            cout << "3. Jeans ($60)";
            cout << "Select item: ";
            cin >> item;

            switch (item) {
                case 1: price = 120; break;
                case 2: price = 40; break;
                case 3: price = 60; break;
                default:
                    cout << "Invalid item selection";
                    return 0;
            }
            break;

        case 3: // Groceries
            cout << "\nGroceries Items:";
            cout << "1. Milk ($2)";
            cout << "2. Bread ($3)";
            cout << "3. Eggs ($5)";
            cout << "Select item: ";
            cin >> item;

            switch (item) {
                case 1: price = 2; break;
                case 2: price = 3; break;
                case 3: price = 5; break;
                default:
                    cout << "Invalid item selection";
                    return 0;
            }
            break;

        default:
            cout << "Invalid category selection";
            return 0;
    }

    cout << "Enter quantity: ";
    cin >> quantity;

    subtotal = price * quantity;

    // Discount calculation
    if (subtotal < 100)
        discount = 0;
    else if (subtotal <= 500)
        discount = subtotal * 0.10;
    else
        discount = subtotal * 0.20;

    total = subtotal - discount;

    // Invoice
    cout << fixed << setprecision(2);
    cout << "-------- INVOICE-------"<<endl;
    cout << "Price per item : $" << price << endl;
    cout << "Quantity       : " << quantity << endl;
    cout << "Subtotal       : $" << subtotal << endl;
    cout << "Discount       : $" << discount << endl;
    cout << "Total Payable  : $" << total << endl;
    return 0;
}

