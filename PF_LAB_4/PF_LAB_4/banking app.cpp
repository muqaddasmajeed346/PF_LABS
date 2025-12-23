//#include<iostream>
//using namespace std;
//int main()
//{
//	int num;
//	cout<<"enter an integer"<<endl;
//	cin>>num;
//	string result=(num%2==0)? "even":"odd";
//	cout<<"the number"<< num << "is"<<result<<endl;
//	return 0;	
//}

//#include<iostream>
//using namespace std;
//int main()
//{
//	int age;
//	cout<<"enter your age:"<<endl;
//	cin>>age;
//	string category=(age<13)?"child":(age<=19)?"teenager":"adult";
//	cout<<" age "<<age<<" falls under the category: "<<category<<endl;
//	return 0;
//}

#include<iostream>
using namespace std;
int main()
{
	int balance;
	bool isLoyal;
	cout<<"enter your balance :$"<<endl;
	cin>>balance;
	string accountType=(balance < 100)?"low balance account":(balance<=500)?"standard account":"premiun account";
	cout<<"account type:"<<accountType<<endl;
	//special offer
	string offerStatus=(balance > 200 && isLoyal)?"elligible for special offer":"not elligible for special offer";
	cout<<"special offer:"<<offerStatus<<endl;
	return 0;
}


