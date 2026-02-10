#include<iostream>
using namespace std;
int main()
{
   int i=1;
   int num1;
   cout<<"enter number of table you want"<<endl;
   cin>>num1;
   int num2;
   cout<<"enter the range up to which you want table"<<endl;
   cin>>num2;
   while(i<=num2)
   {
   	cout<<num1<<"x"<<i<<"="<<num1*i<<endl;
   	i++;
	   }
	   return 0;	
}
