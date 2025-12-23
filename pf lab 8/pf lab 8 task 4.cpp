// Write a C++ program that acts as a currency converter. Use a switch
//statement to let the user choose between converting from USD to
//PKR,INR,Euros. Display the converted amount based on the
//exchange rate and the amount entered by the user.


#include<iostream>
using namespace std;
int main()
{
   int choice;
   double convertedAmount;
   double usd;
   cout<<"currency converter"<<endl;
   cout<<"1. for USD t pkr"<<endl;
   cout<<"2.for usd to inr"<<endl;
   cout<<"3.for usd to euros"<<endl;
   cin>>choice;
   switch (choice)
   {
   	case 1:
   		convertedAmount=usd*278.50;
   		cout<<"amount in PKR :"<<convertedAmount<<endl;
   	    break;
   	    
   	case 2:
	   	convertedAmount=usd*83.20;
   		cout<<"amount in INR :"<<convertedAmount<<endl;
   	    break;
   	    
	case 3:
		convertedAmount=usd*0.92;
   		cout<<"amount in Euros :"<<convertedAmount<<endl;
   	    break;
		   	   	
   default:
	   cout<<"invalid input x x"<<endl;
    }
    return 0;
}
