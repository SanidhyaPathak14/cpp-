#include <iostream>
using namespace std;

int main() {
    int num, count = 0;

    // Input from user
    cout << "Enter a number: ";
    cin >> num;

    // handles when number is zero 
    if (num == 0) {
        count = 1;

    } else {

       
        while (num != 0) {
        num = num / 10;  // this line is used to remove the last digit
        count++;    // add remove digit in count     
    }

    // Output the number of digits
    cout << "Number of digits: " << count << endl;

    return 0;
}
}