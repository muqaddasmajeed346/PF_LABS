#include<iostream>
using namespace std;
int main(){
	int age;
	cout<<"enetr you are age"<<endl;
	cin>>age;
	double income;
	cout<<"enter you are annual income :"<<endl;
	cin>>income;
	if(age>=18){
		if(income>18000){
			cout<<" congratulations ! you are elligible for loan"<<endl;
		}
		else{
			cout<<"you meet the age criteria but your income is insufficient for loan elligibility"<<endl;
		}
	}
	else{
		cout<<"you are under age"<<endl;
	}
	return 0;
} 
