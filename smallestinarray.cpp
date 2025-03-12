#include <iostream>
using namespace std;

int main() {
    int n;

    
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];  

    // Input elements of the array
    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // here in below line we can assume that value of array is zero
    int smallest = arr[0];

    // here we can run a loop for finding smallest number
    for (int i = 1; i < n; i++) {
        if (arr[i] < smallest) {
            smallest = arr[i];
        }
    }

    
    cout << "The smallest number is: " << smallest << endl;

    return 0;
}
