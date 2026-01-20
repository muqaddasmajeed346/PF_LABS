#include<iostream>
using namespace std;
int main(){
	int num;
	cout<<"enter number of table you want"<<endl;
	cin>>num;
	for (int i=1;i<=num;i++){
		cout<<num<<"x"<<i<<"="<<num*i<<endl;
	}
	return 0;
}

