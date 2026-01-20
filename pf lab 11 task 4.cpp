#include <iostream>
using namespace std;

int main() {
    int arr[] = {5, 10, 15, 20, 25};
    int sum = 0;
    int length = sizeof(arr) / sizeof(arr[0]);

    for(int i = 0; i < length; i++) {
        sum = sum + arr[i];
    }

    float avg = (float)sum / length;
    cout << "Sum = " << sum << endl;
    cout << "Average = " << avg << endl;

    return 0;
}
