//Write a C++ program that calculates the area of different shapes.
//Use a switch statement to let the user select a shape (1 for Circle, 2
//for Rectangle, 3 for Triangle) and input the necessary dimensions.
//The program should compute and display the area based on the
//selected shape.

#include<iostream>
using namespace std;
int main()
{
  int choice;
  double area;
  cout<<"select shape to calculate area"<<endl;
  cout<<"1 for circle"<<endl;
  cout<<"2 for rectangle"<<endl;
  cout<<"3 for triangle"<<endl;
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

















