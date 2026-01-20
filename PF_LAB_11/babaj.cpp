//Write a program that prompts the user to enter a password.
// If the entered password is incorrect, they should be asked to try again until the password matches the correct one.
#include<iostream>
using namespace std;
int main(){
		string password;
	string correctPassword = "user123";
	do{
	cout<<"enter password"<<endl;
	cin>>password;
	if(password != correctPassword){
		cout<<"wrong password ! please try again"<<endl;
	}
    }
    while(password != correctPassword);
    cout<<"access grated"<<endl;
    return 0;
}
