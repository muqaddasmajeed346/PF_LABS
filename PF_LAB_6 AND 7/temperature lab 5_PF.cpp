#include<iostream>
using namespace std;
int main()
{
	int temp;
	cout<<"enter temperature in(C)"<<endl;
	cin>>temp;
	if(temp>=40)
	cout<<"stay indoor because it is extremly hot and could be dangerous to healh"<<endl;
	else if(temp>=30&&temp<=39)
	cout<<"drinking plenty of water to stay hydrated in the hot weather"<<endl;
	else if(temp>=20&&temp<=29)
	cout<<"the weather is pleasent and suitable for outdoor activities"<<endl;
	else
	cout<<"wear warm clothes to stay comfortable in the cooler weather"<<endl;
	return 0;	
}
