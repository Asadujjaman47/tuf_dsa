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

// Class to handle subarray-related operations
class SubarraySolver {
public:
    // Method to find the length of the longest subarray with sum equal to k
    int getLongestSubarray(vector<int>& a, int k) {
        int n = a.size(); // Get the size of the input array
        int len = 0;      // Variable to store the maximum length found

        // Loop to choose the starting index of the subarray
        for (int i = 0; i < n; i++) {
            // Loop to choose the ending index of the subarray
            for (int j = i; j < n; j++) {
                int sum = 0; // Store sum of current subarray

                // Loop to calculate the sum of the subarray from i to j
                for (int idx = i; idx <= j; idx++) {
                    sum += a[idx];
                }

                // If subarray sum matches target, update maximum length
                if (sum == k) {
                    len = max(len, j - i + 1);
                }
            }
        }
        return len; // Return the longest length found
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

// Time Complexity: O(N3)
// Space Complexity: O(1)
