#include<iostream>
using namespace std;
int main(){
	string correctPassword="12345";
	string correctName="admin";
	string name;
	cout<<"enetr user name :"<<endl;
	cin>>name;
	string password;
	cout<<"enter your password :"<<endl;
	cin>>password;
	if(password == correctPassword&&name == correctName){
		cout<<"Access granted"<<endl;
	}
	else if(password==correctPassword&&name!=correctName){
		cout<<"user not found"<<endl;
	}
	else{
		cout<<"wrong password"<<endl;
	}
	return 0;
}
