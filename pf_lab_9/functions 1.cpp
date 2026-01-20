#include<iostream>
using namespace std;
	//minimums of two number
	int mini(int a,int b){//input values are parameters
	if(a<b){
		return a;
	}
	else(b<a);{
		return b;
	}
	
}
	int main(){
		cout<<"minimum ="<<mini(5,3);//5,3 are arguments
		return 0;
	}
