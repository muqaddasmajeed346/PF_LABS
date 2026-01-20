#include<iostream>
using namespace std;
int main(){
	int num;
	do{
	 cout<<"enter number"<<endl;
	 cin>>num;	
	 if(num<0){
	 	cout<<"please enter positive number..."<<endl;
	 }
    }
	 while(num<0);
	cout<<"number is positive"<<endl;
}
