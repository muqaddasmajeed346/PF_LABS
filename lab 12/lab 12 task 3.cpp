//Write a C++ program that defines a function to determine whether a given number is even or odd. 
//The function should take an integer input and print "Even" if the number is divisible by 2; otherwise, it should print "Odd". 
//Call this function from main() with different values.
#include<iostream>
using namespace std;
    void evod(int num){
 	if(num%2==0){
 		cout<<"number is even"<<endl;
	 }
	 else{
	 	cout<<"odd"<<endl;
	 }
    }
	 int main(){
	 	evod(5);
 return 0;
 }
