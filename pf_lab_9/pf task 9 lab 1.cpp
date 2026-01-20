#include<iostream>
using namespace std;
int main()
{
	int a;
	cout<<"enter a number"<<endl;
	cin>>a;
	cout<<"number from 1 to "<<a<<":"<<endl;
	int i =1;
	while(i<=a){
		cout<<i;
		++i;
	}
}
