/*
Print 1 to N using Recursion

Problem Description: Given an integer N, 
write a program to print numbers from 1 to N.

Examples
    Input: N = 4
    Output: 1, 2, 3, 4
    Explanation: All the numbers from 1 to 4 are printed.

    Input: N = 1
    Output: 1 
    Explanation: This is the base case.

Backtracking
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // Recursive function to print numbers from current to n using backtracking
    void printNumbers(int current, int n) {
        // Base case: if current exceeds n, stop recursion
        if (current > n)
            return;

        // Recursive call with next number
        printNumbers(current + 1, n);

        // Print current number during backtracking
        cout << current << " ";
    }
};

int main() {
    Solution sol;
    int n = 10;

    sol.printNumbers(1, n);
    cout << "\n";

    return 0;
}

// Time Complexity: O(N)
// Space Complexity: O(N)