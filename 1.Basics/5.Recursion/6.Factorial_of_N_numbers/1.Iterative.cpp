/*
Factorial of a Number : Iterative and Recursive

Problem Statement: Given a number X,  print its factorial.

To obtain the factorial of a number, it has to be multiplied by 
all the whole numbers preceding it. More precisely X! = X*(X-1)*(X-2) … 1.

Note: X  is always a positive number. 

Examples
    Example 1:
    Input: X = 5
    Output: 120
    Explanation: 5! = 5*4*3*2*1

    Example 2:
    Input: X = 3
    Output: 6
    Explanation: 3!=3*2*1

Iterative Solution
*/

#include <iostream>
using namespace std;

// Function to calculate factorial of a number
int factorial(int X) {
    int ans = 1;

    // Loop from 1 to X to compute factorial
    for (int i = 1; i <= X; i++) {
        ans = ans * i;
    }

    // Return the final result
    return ans;
}

int main() {
    // Input value for which factorial is to be calculated
    int X = 5;

    // Call the factorial function and store the result
    int result = factorial(X);

    // Print the result
    cout << "The factorial of " << X << " is " << result;

    return 0;
}


// Time Complexity: O(n)
// Space Complexity: O(1)