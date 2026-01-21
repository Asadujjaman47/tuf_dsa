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

*/

#include <bits/stdc++.h>
using namespace std;

// Recursive function to compute the Nth Fibonacci number
int fibonacci(int N) {
    // Base case: if N is 0 or 1, return N itself
    if (N <= 1) {
        return N;
    }

    // Recursive case: sum of (N-1)th and (N-2)th Fibonacci numbers
    int last = fibonacci(N - 1);   // (N-1)th Fibonacci
    int slast = fibonacci(N - 2);  // (N-2)th Fibonacci

    return last + slast;
}

int main() {
    int N = 4;
    cout << fibonacci(N) << endl; // Output: 3 (0 1 1 2 3)
    return 0;
}

// Time Complexity: O(2^N)
// Space Complexity: O(N) 