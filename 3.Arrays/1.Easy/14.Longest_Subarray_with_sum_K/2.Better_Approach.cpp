/*
Longest Subarray with sum K | [Postives and Negatives]

Problem Statement: Given an array and a sum k, 
we need to print the length of the longest subarray that sums to k.

Examples
Example 1:
Input Format: N = 3, k = 5, array[] = {2,3,5}
Result: 2
Explanation: The longest subarray with sum 5 is {2, 3}. And its length is 2.

Example 2:
Input Format: N = 3, k = 1, array[] = {-1, 1, 1}
Result: 3
Explanation: The longest subarray with sum 1 is {-1, 1, 1}. And its length is 3.            
*/

#include <bits/stdc++.h>
using namespace std;

// Class to encapsulate the subarray logic
class SubarraySolver {
public:
    // Method to find the longest subarray with sum equal to k
    int getLongestSubarray(vector<int>& a, int k) {
        int n = a.size(); // Total number of elements
        int len = 0;      // Variable to store the max length found

        // Outer loop: pick every possible starting index
        for (int i = 0; i < n; i++) {
            int s = 0; // Reset sum for each new starting index

            // Inner loop: extend the subarray from the current start
            for (int j = i; j < n; j++) {
                s += a[j]; // Add current element to the ongoing sum

                // If current sum equals target, update the max length
                if (s == k) {
                    len = max(len, j - i + 1);
                }
            }
        }
        return len; // Return the maximum length found
    }
};

int main() {
    vector<int> a = { -1, 1, 1 };
    int k = 1;

    SubarraySolver solver;
    int len = solver.getLongestSubarray(a, k);

    cout << "The length of the longest subarray is: " << len << "\n";
    return 0;
}

// Time Complexity: O(N2)
// Space Complexity: O(1)
