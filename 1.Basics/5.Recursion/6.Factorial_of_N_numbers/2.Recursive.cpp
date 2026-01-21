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

Recursive Solution
*/

#include <bits/stdc++.h>
using namespace std;

// Recursive function to calculate factorial of a number
int factorial(int n) {
    // Base case: factorial of 0 is 1
    if (n == 0) {
        return 1;
    }

    // Recursive case: n * factorial of (n-1)
    return n * factorial(n - 1);
}

int main() {
    // Define the number to compute factorial
    int n = 3;

    // Call the factorial function and print the result
    cout << factorial(n) << endl;

    return 0;
}


// Time Complexity: O(N)
// Space Complexity: O(N)