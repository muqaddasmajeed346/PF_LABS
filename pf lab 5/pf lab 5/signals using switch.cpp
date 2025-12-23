#include<iostream>
using namespace std;
int main()
{
	int colour;
	cout<<"enter colour 1.yellow,2.green,3.red"<<endl;
	cin>>colour;
	switch(colour)
	case(1):{
		cout<<"ready";
		break;
	case(2):
		cout<<"go"<<endl;
		break;
	case(3):
		cout<<"stop"<<endl;
		break;
	
	default:
		cout<<"invalid iput"<<endl;
	}
	
		return 0;
}
