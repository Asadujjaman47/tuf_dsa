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

Solution 2: Space optimized:
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n = 5;

    // If n is 0, only the first Fibonacci number is printed
    if (n == 0) {
        cout << "The Fibonacci Series up to " << n << "th term:" << endl;
        cout << 0;
    }
    else {
        int secondLast = 0; // (i-2)th term
        int last = 1;       // (i-1)th term

        cout << "The Fibonacci Series up to " << n << "th term:" << endl;
        cout << secondLast << " " << last << " ";

        int cur; // ith term
        for (int i = 2; i <= n; i++) {
            cur = last + secondLast;   // ith Fibonacci number
            secondLast = last;         // move window forward
            last = cur;
            cout << cur << " ";
        }
    }

    return 0;
}

// Time Complexity: O(N)
// Space Complexity: O(1)