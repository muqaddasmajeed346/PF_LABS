#include<iostream>
using namespace std;
int main()
{
	double balance=1000;
	int choice;
	double amount;
	while (true)
	{
		cout<<"enter your choice"<<endl;
		cout<<"1. for deposit money"<<endl;
		cout<<"2. for withdraw money"<<endl;
		cout<<"3. for check balance"<<endl;
		cout<<"4. for exit"<<endl;
		cin>>choice;
		if(choice==1)
		{
			cout<<"enter amount to deposit :";
			cin>>amount;
			if(amount>0)
			{
				balance =balance+amount;cout<<"deposited succesfully"<<endl;
			}
			else{
				cout<<"invalid deposit amount"<<endl;
			} 
		}
		else if(choice==2)
		{
			cout<<"enter amount to withdraw"<<endl;
			cin>>amount;
			if(amount>0&&amount<=balance)
			{
				balance= balance-amount;
				cout<<"withdrawal successfull"<<endl;
			}
			else{
				cout<<"insufficient balance"<<endl;
			}
		}
		else if(choice==3){
			cout<<"current balance :"<<balance<<endl;
		}	
		else if(choice==4)
		{
			cout<<"thankyou for using our banking system"<<endl;
			break;
		}
		else
		{
			cout<<"invalid choice. please try again :"<<endl;
		}
    }
		return 0;		
}
