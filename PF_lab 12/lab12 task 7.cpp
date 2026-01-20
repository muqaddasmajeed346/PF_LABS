#include <iostream>
using namespace std;

// Function to display the menu
void displayMenu() {
    cout << "\n----- Restaurant Menu -----\n";
    cout << "1. Burger        - $5.00\n";
    cout << "2. Pizza         - $8.00\n";
    cout << "3. Pasta         - $6.50\n";
    cout << "4. Sandwich      - $4.50\n";
    cout << "5. Coffee        - $3.00\n";
    cout << "6. Exit\n";
}

// Function to calculate cost of selected item
double calculateItemCost(double price, int quantity) {
    return price * quantity;
}

// Function to calculate final bill with tax/service charge
double calculateFinalBill(double total) {
    double tax = total * 0.10;   // 10% service charge
    return total + tax;
}

int main() {
    int choice, quantity;
    double totalBill = 0.0;
    double price = 0.0;

    do {
        displayMenu();
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice >= 1 && choice <= 5) {
            cout << "Enter quantity: ";
            cin >> quantity;

            // Assign price based on choice
            switch (choice) {
                case 1: price = 5.00; break;
                case 2: price = 8.00; break;
                case 3: price = 6.50; break;
                case 4: price = 4.50; break;
                case 5: price = 3.00; break;
            }

            totalBill += calculateItemCost(price, quantity);
            cout << "Item added to your order.\n";
        }
        else if (choice == 6) {
            break;
        }
        else {
            cout << "Invalid choice. Please try again.\n";
        }

    } while (choice != 6);

    // Calculate final bill
    double finalAmount = calculateFinalBill(totalBill);

    cout << "\n----- Bill Summary -----\n";
    cout << "Subtotal: $" << totalBill << endl;
    cout << "Service Charge (10%): $" << totalBill * 0.10 << endl;
    cout << "Total Amount: $" << finalAmount << endl;
    cout << "Thank you for dining with us!\n";

    return 0;
}
