#include <iostream>
using namespace std;
int main(){
	int* ptr = NULL;
    if(ptr == NULL){
    	cout<<"the pointer is NULL"<<endl;
	}
	else
	{
		cout<<"the pointer is not null.it ponints to memory addres"<<ptr<<endl;
	}
	return 0;
}
