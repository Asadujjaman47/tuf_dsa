/**
Implement Lower Bound
 
Problem Statement: Given a sorted array of N integers and an integer x, 
write a program to find the upper bound of x.

Examples

Example 1:
Input Format: N = 4, arr[] = {1,2,2,3}, x = 2
Result: 3
Explanation: Index 3 is the smallest index such that arr[3] > x.

Example 2:
Input Format: N = 6, arr[] = {3,5,8,9,15,19}, x = 9
Result: 4
Explanation: Index 4 is the smallest index such that arr[4] > x.

Naive approach (Using linear search): 
 */

#include <bits/stdc++.h>
using namespace std;

// Class to find the upper bound index in an array
class UpperBoundFinder {
public:
    // Linear search method to find upper bound
    int upperBound(vector<int> &arr, int x, int n) {
        for (int i = 0; i < n; i++) {
            if (arr[i] > x) {
                return i; // First element strictly greater than x
            }
        }
        return n; // If no such element exists, return n
    }
};

int main() {
    vector<int> arr = {3, 5, 8, 9, 15, 19}; // Sorted input array
    int n = arr.size();                    // Size of the array
    int x = 9;                             // Target value

    UpperBoundFinder finder;              // Create object of class
    int ind = finder.upperBound(arr, x, n); // Call method

    cout << "The upper bound is the index: " << ind << "\n"; // Output result
    return 0;
}

// Time Complexity: O(N)
// Space Complexity: O(1)