#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    //predefined test scores
	double score1=85.5;
	double score2=90.75;
	double score3=88.25;
	//calculate average;
	double average=(score1+score2+score3/3);
	//dispay result with 2 decimal places
	cout<<fixed<<setprecision(2)
	//format to show two decimal places
	cout<<"the average of 85.5,90.75 and 88.25 is:"<<average<<endl;
	return 0;
}
