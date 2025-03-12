// // wap to find factorial using for loop

// #include <iostream>
// using namespace std;

// int main() {
//     int num;
//     int factorial = 1;

//     // Ask the user to enter a number
//     cout << "Enter a positive integer: ";
//     cin >> num;

//     // Check if the number is negative

//     if (num < 0) {
//         cout << "Factorial is not defined for negative numbers." << endl;
//     } 
//     else {
//         // Calculate factorial using a for loop

//         for (int i = 1; i <= num; i++) {
//             factorial = factorial *  i;  // Multiply factorial by i in each iteration
//         }

//         // Display the result
//         cout << "Factorial of " << num << " is " << factorial << endl;
//     }

//     return 0;
// }



// wap to find factorial using while loop.....
// #include <iostream>
// using namespace std;

// int main (){

// int num;
// int fact =1;

// cout<<"enter the number : ";
// cin>> num;

// int i=1;
// while( i<=num){
//     fact =fact*i;
//     i++;
// }

// cout<<"factorial is "<<num<< "is "<< fact << endl;

// }





// #include <iostream>
// using namespace std;

// int main() {
// int num;
// int factorial = 1;

// // Ask the user to enter a number
// cout << "Enter a positive integer: ";
// cin >> num;

//   int i = 1;

// // Calculate factorial using a do-while loop

// do {
// factorial *= i;  // Multiply factorial by i in each iteration
// i++;  // Increment i
// } 

// while (i <= num);  // Repeat the loop while i is less than or equal to num

// // Display the result
// cout << "Factorial of " << num << " is " << factorial << endl;
// }



// wap to calculate factorial using functions..

#include <iostream>
using namespace std;

// Function to calculate factorial
int  factorial(int num) {
int  result = 1;

// Calculate factorial using a for loop
for (int i = 1; i <= num; ++i) {
result = result * i;
}

return result;
}

int main() {
    int num;

    // Ask the user to enter a number
    cout << "Enter a positive integer: ";
    cin >> num;

    // Check if the number is negative
    if (num < 0) {
        cout << "Factorial is not defined for negative numbers." << endl;
    } else {
        // Call the factorial function and display the result
        cout << "Factorial of " << num << " is " << factorial(num) << endl;
    }

    return 0;
}




    

