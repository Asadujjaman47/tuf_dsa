/*
Finding Sqrt of a number using Binary Search

Problem Statement: You are given a positive integer n. 
Your task is to find and return its square root. 
If ‘n’ is not a perfect square, then return the floor value of 'sqrt(n)'.

Note: The question explicitly states that if the given number, 
n, is not a perfect square, 
our objective is to find the maximum number, 
x, such that x squared is less than or equal to n (x*x <= n). 
In other words, we need to determine the floor value of the square root of n.

Examples

Example 1:
Input Format: n = 36
Result: 6
Explanation: 6 is the square root of 36.

Example 2:
Input Format: n = 28
Result: 5
Explanation: Square root of 28 is approximately 5.292. So, the floor value will be 5.

Naive Approach(Using linear search): 
*/
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // Function to find floor of square root using linear search
    int floorSqrt(int n) {
        // Variable to store answer
        int ans = 0;

        // Run loop from 1 to n
        for (int i = 1; i <= n; i++) {
            // Check if i*i <= n
            if ((long long)i * i <= n) {
                // Update answer
                ans = i;
            } else {
                // Break when i*i > n
                break;
            }
        }
        // Return final answer
        return ans;
    }
};

int main() {
    // Example input
    int n = 27;

    // Create object of Solution
    Solution sol;

    // Call function and print result
    cout << sol.floorSqrt(n) << endl;

    return 0;
}

// Time Complexity: O(N)
// Space Complexity: O(1) 