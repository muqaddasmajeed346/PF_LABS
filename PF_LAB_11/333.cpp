#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    int arr[n];
    
    cout << "Enter " << n << " elements:\n";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
     cout << "arrays elemnets before updation"<<endl;
      for(int i = 0; i < n; i++) {
        cout<<arr[i]<<endl;
    }
    
    int index;
    cout<<"enter index number element you want to change"<<endl;
    cin>>index;
    
    int changeElement;
    cout<<"enter change element"<<endl;
    cin>>changeElement;
    
    arr[index]=changeElement;
    
    cout << "arrays elements after updation"<<endl;
    for(int i = 0; i < n; i++) {
        cout<<arr[i]<<endl;
    }
    return 0;
}
