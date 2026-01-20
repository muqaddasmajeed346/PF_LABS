#include<iostream>
using namespace std;
int main(){
	int arr[]={1,2,3,4,5};
	int *ptr;
	ptr=arr;
	cout<<"elements of the arrays are :";
	for(int i=0;i<5;i++){
		cout<<*ptr<<" ";
		ptr++;
	}

}
