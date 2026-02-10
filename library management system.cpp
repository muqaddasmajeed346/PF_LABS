#include <iostream>
using namespace std;

const int MAX = 10;
const int NAME_SIZE = 30;

// Function prototypes
void addBooks(int *ids, char *names, int *status, int total);
void displayBooks(int *ids, char *names, int *status, int total);
void issueBook(int *ids, int *status, int total);
void returnBook(int *ids, int *status, int total);
void searchBook(int *ids, char *names, int *status, int total);

int main()
{
    int bookID[MAX];
    char bookName[MAX *NAME_SIZE];
    int bookStatus[MAX];    //// 0 = Available , 1 = Issued.
    int totalBooks = 0;
    int choice;

    // Initialize book status
    for (int i = 0; i < MAX; i++)
    {
        bookStatus[i] = 0;
    }
    do
    {
    	cout<<endl;
        cout << " ===== Library Management System =====  "<<endl;
        cout << "1. Add Books"<<endl;
        cout << "2. Display Books"<<endl;
        cout << "3. Issue Book"<<endl;
        cout << "4. Return Book"<<endl;
        cout << "5. Search Book"<<endl;
        cout << "6. Exit"<<endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
            case 1:
                cout << "How many books do you want to add? ";
                cin >> totalBooks;
                addBooks(bookID, bookName, bookStatus, totalBooks);
                break;

            case 2:
                displayBooks(bookID, bookName, bookStatus, totalBooks);
                break;

            case 3:
                issueBook(bookID, bookStatus, totalBooks);
                break;

            case 4:
                returnBook(bookID, bookStatus, totalBooks);
                break;

            case 5:
                searchBook(bookID, bookName, bookStatus, totalBooks);
                break;

            case 6:
                cout << "Exiting program thankyou..\n";
                break;

            default:
                cout << "Invalid choice!\n";
        }

    } while (choice != 6);

    return 0;
}
// Function to add books
void addBooks(int *ids, char *names, int *status, int total)
{
    for (int i = 0; i < total; i++)
    {
        cout << " Enter Book ID: ";
        cin >> ids[i];

        cout << "Enter Book Name: ";
        cin >> &names[i * NAME_SIZE];

        status[i] = 0;   // Available
    }
}

// Function to display books
void displayBooks(int *ids, char *names, int *status, int total)
{
	cout<<endl;
    cout << "BookID  BookName  Status  "<<endl;

    for (int i = 0; i < total; i++)
    {
        cout <<"  "<< ids[i] << "  ";
        cout << "  "<< &names[i * NAME_SIZE] << "  ";

        if (status[i] == 0)
            cout << "  Available  "<<endl;
        else
            cout << "  Issued  "<<endl;
    }
}

//  issue book function;
void issueBook(int *ids, int *status, int total)
{
	cout<<endl;
    int id;
	int found = 0;
    cout << "Enter Book ID you want to issue: ";
    cin >> id;

    for (int i = 0; i < total; i++)
    {
        if (ids[i] == id)
        {
            found = 1; /// FOUND
            if (status[i] == 0)  ///available
            {
                status[i] = 1; /// issued
                cout << "Book issued successfully"<<endl;
            }
            else
            {
                cout << "Book is already issued"<<endl;
            }
        }
    }

    if (found == 0)
    {
        cout << "Book not found."<<endl;
    }
}

//  return book function
void returnBook(int *ids, int *status, int total)
{
    int id;
	int found = 0;
    cout << "Enter Book ID to return: ";
    cin >> id;

    for (int i = 0; i < total; i++)
    {
        if (ids[i] == id)
        {
            found = 1;
            if (status[i] == 1)
            {
                status[i] = 0;
                cout << "Book returned successfully"<<endl;
            }
            else
            {
                cout << "Book was not issued"<<endl;
            }
        }
    }

    if (found == 0)
    {
        cout << "Book not found"<<endl;
    }
}

//  search book function
void searchBook(int *ids, char *names, int *status, int total)
{
    int id;
	int found = 0;
    cout << "Enter Book ID to search: ";
    cin >> id;

    for (int i = 0; i < total; i++)
    {
        if (ids[i] == id)
        {
            found = 1;
            cout << "Book ID: " << ids[i] << endl;
            cout << "Book Name: " << &names[i * NAME_SIZE] << endl;

            if (status[i] == 0)
                cout << "Status: Available"<<endl;
            else
                cout << "Status: Issued"<<endl;
        }
    }

    if (found == 0)
    {
        cout << "Book not found." <<endl;
    }
}
