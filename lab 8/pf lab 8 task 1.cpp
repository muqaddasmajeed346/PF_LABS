#include<iostream>
using namespace std;
int main()
{
    int num1;
    int num2;
    char op;
    cout<<"enter 1st number"<<endl;
    cin>>num1;
    cout<<"enter 2ndst number"<<endl;
    cin>>num2;
    cout<<"enter operator +,-,*,/"<<endl;
    cin>>op;
    switch(op){
    case '+':
    	cout<<"result:"<<num1+num2<<endl;
    	break;
    case '-':
    	cout<<"result:"<<num1-num2<<endl;
    	break;
    case '*':
    	cout<<"result:"<<num1*num2<<endl;
    	break;
    case '/':
    	cout<<"result:"<<num1/num2<<endl;
    	break;
    	default:
    	cout<<"inavalid operator"<<endl;
	}

	return 0;	
}
