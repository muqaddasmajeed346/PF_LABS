#include<iostream>
using namespace std;
int main(){
	int a =10;
	int *ptr = &a;
	*ptr=20;
	cout<<"value of variable :"<<*ptr<<endl;
}
