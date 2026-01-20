#include<iostream>
using namespace std;
int main(){
	int arr[]={1,2,3,4,5};
	int*ptr =arr;
	cout<<"elements of the arrays are :";
	cout<<*ptr<<" "<<*ptr+1<<" "<<*ptr+2<<" "<<*ptr+3<<" "<<*ptr+4<<" "<<endl;
   return 0;
}
