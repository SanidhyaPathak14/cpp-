#include <iostream>
using namespace std;

int main() {
    int n;

    
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int arr[n];

    
    cout << "Enter " << n << " elements:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int largest = arr[0];  // intialize array with zero

    // to find largest number we use this loop
    for (int i = 1; i < n; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }

    // Output the largest number
    cout << "The largest number in the array is: " << largest << endl;

    return 0;
}
