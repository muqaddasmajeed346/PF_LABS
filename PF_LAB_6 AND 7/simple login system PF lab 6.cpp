#include<iostream>
using namespace std;
int main()
{
	string username,password;
	//predefined correct credentials
	string correctUsername="admin";
	string correctPassword="12345";
	//input
	cout<<"enter username"<<endl;
	cin>>username;
	cout<<"enter password"<<endl;
	cin>>password;
	if(username == correctUsername&&password == correctPassword){
	cout<<"Access Granted"<<endl;
	}
	else if(username==correctUsername && password!=correctPassword){
	cout<<"wrong password"<<endl;
	}
	else{
	cout<<"user not found"<<endl;
	}
	return 0;	 
}
