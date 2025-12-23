#include<iostream>
using namespace std;
int main()
{
	int num;
	cout<<"enter a positive integer"<<endl;
	cin>>num;
	while(num<=0)
	{
		cout<<"please enter a positive number"<<endl;
		cin>>num;
	}
	cout<<"you entered a positive number :"<<num<<endl;
	return 0;
}
