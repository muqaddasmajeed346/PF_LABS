#include<iostream>
using namespace std;
int main()
{
	int num;
	cout<<"enter an integer"<<endl;
	cin>>num;
	string result=(num%2==0)? "even":"odd";
	cout<<"the number"<< num << "is"<<result<<endl;
	return 0;	
}

#include<iostream>
using namespace std;
int main()
{
	int age;
	cout<<"enter your age:"<<endl;
	cin>>age;
	string category=(age<13)?"child":(age<=19)?"teenager":"adult";
	cout<<" age "<<age<<" falls under the category: "<<category<<endl;
	return 0; 
}
