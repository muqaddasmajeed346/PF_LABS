#include<iostream>
using namespace std;
//calcuate sum of numbers from 1 to N.
int sumN(int n){
	int sum = 0;
	for(int i = 1; i<=n ; i++){
		sum=sum+i;
	}
	return sum;
}
int maim(){
	cout<<sumN(5)<<endl;
	return 0;
}

