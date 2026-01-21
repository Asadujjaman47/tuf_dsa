/*
Print N to 1 using Recursion

Problem Description: Given an integer N, 
write a program to print numbers from N to 1.

Examples
    Input: N = 4
    Output: 4, 3, 2, 1
    Explanation: All the numbers from 4 to 1 are printed.

    Input: N = 1
    Output: 1 
    Explanation: This is the base case.

Forward Recursion
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // Recursive function to print numbers from current down to 1
    void printNumbers(int current) {
        // Base case: if current is less than 1, stop recursion
        if (current < 1)
            return;

        // Print current number
        cout << current << " ";

        // Recursive call with next smaller number
        printNumbers(current - 1);
    }
};

int main() {
    Solution sol;
    int n = 10;

    sol.printNumbers(n);
    cout << "\n";

    return 0;
}


// Time Complexity: O(N)
// Space Complexity: O(N)