#include<iostream>
using namespace std;
int main(){
	int num;
	cout<<"enter number of elements"<<endl;
	cin>>num;
	int arr[num];
	int num1;
	cout<<"enter "<<num<<" numbers"<<endl;
	for(int i=0;i<num;i++){
		cin>>arr[i];
	}
	int sum =0;
	for(int i=0;i<num;i++){
		sum = sum+arr[i];
	}
	return 0;
}
