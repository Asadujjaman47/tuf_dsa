/*
Nth Root of a Number using Binary Search

Problem Statement: Given two numbers N and M, find the Nth root of M. 
The nth root of a number M is defined as a number X 
when raised to the power N equals M. 
If the 'nth root is not an integer, return -1.

Examples

Example 1:
Input Format: N = 3, M = 27
Result: 3
Explanation: The cube root of 27 is equal to 3.

Example 2:
Input Format: N = 4, M = 69
Result: -1
Explanation: The 4th root of 69 does not exist. So, the answer is -1.

Approach(Using linear search): 
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // Function to find Nth root of M
    int nthRoot(int n, int m) {
        // Loop from 1 to m
        for (int i = 1; i <= m; i++) {
            // Compute i^n
            long long power = pow(i, n);

            // If equal to m, return i
            if (power == m) return i;

            // If exceeds m, break
            if (power > m) break;
        }

        // If not found, return -1
        return -1;
    }
};

int main() {
    Solution sol;
    int n = 3, m = 27;

    // Find nth root
    cout << "Nth Root: " << sol.nthRoot(n, m) << endl;

    return 0;
}

// Time Complexity: O(M)
// Space Complexity: O(1)