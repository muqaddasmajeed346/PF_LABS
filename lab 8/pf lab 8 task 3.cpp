#include<iostream>
using namespace std;
int main()
{
  int choice;
  double area;
  cout<<"select shape to calculate area"<<endl;
  cout<<"1 for circle"<<endl;//A=PI*r*r
  cout<<"2 for rectangle"<<endl;//A=l*w
  cout<<"3 for triangle"<<endl;//A=1/2*bas*height
  cin>>choice;
  switch(choice)
  {
  	case 1:
  		double radius;
  		cout<<"enter radius of circle"<<endl;
  		cin>>radius;
  		area=3.14*radius*radius;
  		cout<<"area of circle :"<<area<<endl;
  		break;
  	case 2:
	    double length;
	    cout<<"enter length of reactangle"<<endl;
	    cin>>length;
		double width;
		cout<<"enter width of reactangle"<<endl;
		cin>>width;
		area=length*width;
		cout<<"area of reactangle :"<<area<<endl;
		break;
	case 3:
	    double base;
	    cout<<"enter base of triangle"<<endl;
	    cin>>base;
		double height;
		cout<<"enter height of triangle"<<endl;
		cin>>height;
		area=0.5*base*height;
		cout<<"area of triangle :"<<area<<endl;
		break;		
  }
  return 0;
}

















