#include<iostream>
using namespace std;
int main(){
	int age;
	cout<<"enetr your age :";
	cin>>age;
	string category=(age<13)?"child":(age<=19)?"teenager":"adult";
	cout<<"age "<<age<<" lies in "<<category<<" category ";
   return 0;
}
