/*
Print all Divisors of a given Number

Problem Statement: Given an integer N, return all divisors of N.

A divisor of an integer N is a positive integer 
that divides N without leaving a remainder. 
In other words, if N is divisible by another integer without any remainder, 
then that integer is considered a divisor of N.

Examples
                Example 1:
                Input:N = 36
               
                Output:[1, 2, 3, 4, 6, 9, 12, 18, 36]
                
                Explanation: The divisors of 36 are 1, 2, 3, 4, 6, 9, 12, 18, 36.
                                        
                Example 2:
                Input:N =12                
                
                Output: [1, 2, 3, 4, 6, 12]
                
                Explanation: The divisors of 12 are 1, 2, 3, 4, 6, 12.     

Brute Force Approach:
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // Function to find all divisors
    vector<int> getDivisors(int N) {
        // Create a vector to store divisors
        vector<int> res;

        // Loop from 1 to N
        for (int i = 1; i <= N; i++) {
            // Check if i is a divisor of N
            if (N % i == 0) {
                // Add i to the result
                res.push_back(i);
            }
        }
        // Return the list of divisors
        return res;
    }
};

int main() {
    // Create object of Solution class
    Solution sol;

    // Input number
    int N = 36;

    // Call the function to get divisors
    vector<int> result = sol.getDivisors(N);

    // Print the result
    cout << "Divisors of " << N << ": ";
    for (int val : result) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}

// Time Complexity: O(N)
// Space Complexity: O(N)