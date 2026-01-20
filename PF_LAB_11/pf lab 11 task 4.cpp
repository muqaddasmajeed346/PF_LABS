#include <iostream>
using namespace std;

int main() {
    int arr[] = {5, 10, 15, 20, 25};
    int sum = 0;
    float avg;
    int length = sizeof(arr) / sizeof(arr[0]);//5

    for(int i = 0; i < length; i++) {  
        sum = sum + arr[i];
    }

    avg =float(sum) / length;
    cout << "Sum = " << sum << endl;
    cout << "Average = " << avg << endl;

    return 0;
}
