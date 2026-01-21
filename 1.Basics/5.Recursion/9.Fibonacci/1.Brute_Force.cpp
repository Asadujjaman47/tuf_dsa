/*
Print Fibonacci Series up to Nth term

Problem Statement: Given an integer N. Print the Fibonacci series up to the Nth term.

Examples:

Example 1:
Input: N = 5
Output: 0 1 1 2 3 5
Explanation: 0 1 1 2 3 5 is the fibonacci series up to 5th term.(0 based indexing)

Example 2:
Input: 6

Output: 0 1 1 2 3 5 8
Explanation: 0 1 1 2 3 5 8 is the fibonacci series upto 6th term.(o based indexing)

Solution 1: Naive approach:
*/

#include <bits/stdc++.h>
using namespace std;
int main() {
    int n = 5;

    // Edge case: if n is 0, print only 0
    if (n == 0) {
        cout << 0;
    }
    // Special case: if n is 1, print first two Fibonacci numbers
    else if (n == 1) {
        cout << 0 << " " << 1 << "\n";
    }
    // General case: generate and print Fibonacci series up to nth term
    else {
        int fib[n + 1];    // Array to store Fibonacci numbers up to index n
        fib[0] = 0;
        fib[1] = 1;

        // Fill the Fibonacci series using bottom-up dynamic programming
        for (int i = 2; i <= n; i++) {
            fib[i] = fib[i - 1] + fib[i - 2];
        }

        cout << "The Fibonacci Series up to " << n << "th term:" << endl;
        for (int i = 0; i <= n; i++) {
            cout << fib[i] << " ";
        }
    }

    return 0;
}

// Time Complexity: O(n)+O(n)
// Space Complexity: O(n)