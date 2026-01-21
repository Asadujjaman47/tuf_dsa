/**
Implement Lower Bound

Problem Statement: Given a sorted array of N integers and an integer x, 
write a program to find the lower bound of x.

Examples

Example 1:
Input Format: N = 4, arr[] = {1,2,2,3}, x = 2
Result: 1
Explanation: Index 1 is the smallest index such that arr[1] >= x.

Example 2:
Input Format: N = 5, arr[] = {3,5,8,15,19}, x = 9
Result: 3
Explanation: Index 3 is the smallest index such that arr[3] >= x.

Naive approach (Using linear search): 
 */

#include <bits/stdc++.h>
using namespace std;

// Class containing methods for array operations
class LowerBoundFinder {
public:
    // Function to find lower bound index
    int lowerBound(vector<int> arr, int n, int x) {
        // Traverse the array
        for (int i = 0; i < n; i++) {
            // If current element is greater than or equal to x
            if (arr[i] >= x) {
                return i;  // Return index of the first such element
            }
        }
        // If all elements are smaller than x
        return n;
    }
};

int main() {
    vector<int> arr = {3, 5, 8, 15, 19};
    int n = arr.size();  // Size of the array
    int x = 9;           // Target value

    LowerBoundFinder finder;                  // Create object
    int ind = finder.lowerBound(arr, n, x);   // Find lower bound index

    cout << "The lower bound is the index: " << ind << "\n";

    return 0;
}

// Time Complexity: O(N)
// Space Complexity: O(1)