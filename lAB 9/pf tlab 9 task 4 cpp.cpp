#include<iostream>
using namespace std;
int main()
{
	int i=1;
	int sum;
	sum=0;
	while(i<=5)
	{
		cout<<i<<endl;
		sum=sum+i;
		i++;
	}
	cout<<"sum of first five natural number is :"<<sum<<endl;
	return 0;
}
