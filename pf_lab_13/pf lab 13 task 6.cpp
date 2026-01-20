#include <iostream>
using namespace std;

int main() {
    int num = 42;

    void* ptr;      
    ptr = &num;    

    cout << "The value of num using void pointer: " << *(int*)ptr << endl;

    return 0;
}
