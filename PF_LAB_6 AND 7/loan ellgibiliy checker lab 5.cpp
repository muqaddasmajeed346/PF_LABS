#include<iostream>
using namespace std;
int main()
{
	int age;
	int income;
	cout<<"enter your age"<<endl;
	cin>>age;
	cout<<"enter your income"<<endl;
	cin>>income;
	if (age>=18){
	if(income>=30000)
	cout<<"Congratulaions!yaou are elligible for loan"<<endl;
	else
	cout<<"you meet the age requirement but are not elligible for loan because you are income is below 30000"<<endl;
}
else
{
	cout<<"you are not elligible for loan because you are under 18 years of age"<<endl;
}
return 0;
	
}
