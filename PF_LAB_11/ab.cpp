#include<iostream>
using namespace std;
     int factorial(int num){
     	int fact=1;
	for(int i=1;i<num;i++){
		fact=fact*i;
	}
	fact=fact*i;
}
	int main(){
		int a;
		cout<<"enter a number :"<<endl;
		cin>>a;
		factorial(a);
		cout<<fact;
	}
	return 0;
	}

