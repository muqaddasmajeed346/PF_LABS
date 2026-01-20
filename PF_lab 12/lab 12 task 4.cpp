//Write a C++ program that defines a function to compute the factorial of a given number.
// The function should use a loop to multiply all numbers from 1 to n and return the result. 
// In main(), prompt the user to enter a number and display the calculated factorial.
#include<iostream>
using namespace std;
  int factorial(int num){
  	int fact=1;
  	for (int i=1;i<=num;i++){
  		fact=fact*i;
	  }
	  return fact;
  }
  int main(){
    cout<<"enter a number"<<endl;
  	return 0;
  }
  
  //wrong code
