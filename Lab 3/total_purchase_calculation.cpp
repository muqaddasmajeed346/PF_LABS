#include<iostream>
using namespace std;
int main()
{
	//declare constants
	const double SALES_TAX_RATE=0.06;
	//DECLARE AND INITIALLIZE ITEM PRICE
	double item1=12.95;
	double item2=24.95;
	double item3=6.95;
	double item4=16.95;
	double item5=3.95;
	//DISPLAY PRICES
	cout<<"item 1:"<<item1<<endl;
	cout<<"item 2:"<<item2<<endl;
	cout<<"item 3:"<<item3<<endl;
	cout<<"item 4:"<<item4<<endl;
	cout<<"item 5:"<<item5<<endl;
	//CALCULATE SUBTOTAL
	double subtotal=item1+item2+item3+item4+item5;
	//calculate tax
	double tax=subtotal*SALES_TAX_RATE;
	//DISPLAY RESULT
	cout<<"subtotal:"<<subtotal<<endl;
	cout<<"Sales tax:"<<SALES_TAX_RATE<<endl;
	cout<<"Total amount:"<<subtotal+SALES_TAX_RATE<<endl;
	return 0;	
}





