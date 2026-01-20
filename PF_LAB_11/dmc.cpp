#include <iostream>
using namespace std;
int main(){
	do{
		int mainchoice;
		int subchoice;
		int quantity;
		float totalbill;
		cout<<"select main menu"<<endl;
		cout<<"1.breakfast"<<endl;
		cout<<"2.lunch"<<endl;
		cout<<"3.dinner"<<endl;
		cin>>mainchoice;
	switch(mainchoice){
		case 1:
			cout<<" BREAKFAST MENU"<<endl<<endl;
			cout<<"1.anda paratha"<<endl;
			cout<<"2.nan channay"<<endl;
			cout<<"3.siri paye"<<endl;
			cout<<"4.tea"<<endl;
			cin>>subchoice;
				
				cout<<"enter nuber of quantity"<<endl;
				cin>>quantity;
				if (subchoice==1) totalbill = quantity*40;
				else if (subchoice==2) totalbill = quantity*60;
				else if (subchoice==3) totalbill = quantity*150;
			    else if (subchoice==4) totalbill = quantity*15;
			    else cout<<"invalid input"<<endl;
			    break;
	    case 2:
            cout << "\n--- Lunch Menu ---\n";
            cout << "1. Chicken Karahi (Rs.1050/kg)\n";
            cout << "2. Mutton Karahi (Rs.1800/kg)\n";
            cout << "3. Egg Fried Rice (Rs.450/plate)\n";
            cout << "4. BBQ (Rs.1050/dozen)\n";
            cout << "Enter item: ";
            cin >> subChoice;

            cout << "Enter quantity: ";
            cin >> quantity;

            if (subChoice == 1) totalBill = 1050 * quantity;
            else if (subChoice == 2) totalBill = 1800 * quantity;
            else if (subChoice == 3) totalBill = 450 * quantity;
            else if (subChoice == 4) totalBill = 1050 * quantity;
            else cout << "Invalid item!\n";
            break;
        case 3:
            cout << "\n--- Dinner Menu ---\n";
            cout << "1. Chicken Karahi (Rs.1050/kg)\n";
            cout << "2. Mutton Karahi (Rs.1800/kg)\n";
            cout << "3. Egg Fried Rice (Rs.450/plate)\n";
            cout << "4. BBQ (Rs.1050/dozen)\n";
            cout << "5. Saji (Rs.800/kg)\n";
            cout << "Enter item: ";
            cin >> subChoice;

            cout << "Enter quantity: ";
            cin >> quantity;

            if (subChoice == 1) totalBill = 1050 * quantity;
            else if (subChoice == 2) totalBill = 1800 * quantity;
            else if (subChoice == 3) totalBill = 450 * quantity;
            else if (subChoice == 4) totalBill = 1050 * quantity;
            else if (subChoice == 5) totalBill = 800 * quantity;
            else cout << "Invalid item!\n";
            break;

        default:
            cout << "Invalid main menu choice!\n";
        }

        cout << "\nDo you want to order more? (y/n): ";
        cin >> moreOrder;

    } while (moreOrder == 'y' || moreOrder == 'Y');

    cout << "\n===== TOTAL BILL =====\n";
    cout << "Total Amount to Pay: Rs. " << totalBill << endl;
    cout << "Thank you for visiting!\n";

    return 0;
}

		}
	}
	return 0;
}
