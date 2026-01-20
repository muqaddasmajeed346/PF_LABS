#include<iostream>
using namespace std;
int main(){
	string password;
	string correctPassword = "12345";
	do{
	cout<<"enter password :"<<endl;
	cin>>password;
	if(password != correctPassword){
	cout<<"wrong password"<<endl;
     }
     while(password != correctPassword)
     cout<<"access granted"<<endl;
}
     return 0;
}
