/*
Reverse a given Array

Practice:
Solve Problem
Problem Statement: You are given an array. The task is to reverse the array and print it. 

Examples:

Example 1:
    Input: N = 5, arr[] = {5,4,3,2,1}
    Output: {1,2,3,4,5}
    Explanation: Since the order of elements gets reversed the first element 
    will occupy the fifth position, the second element occupies the fourth position and so on.

    Example 2:
    Input: N=6 arr[] = {10,20,30,40}
    Output: {40,30,20,10}
    Explanation: Since the order of elements gets reversed the first element 
    will occupy the fifth position, the second element occupies the fourth position and so on.

Better Approach
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // Function to reverse the array in-place
    void reverseArray(vector<int>& arr) {
        // Initialize pointer to the beginning of the array
        int p1 = 0;

        // Initialize pointer to the end of the array
        int p2 = arr.size() - 1;

        // Loop until the two pointers meet in the middle
        while (p1 < p2) {
            // Swap the elements at p1 and p2
            swap(arr[p1], arr[p2]);

            // Move the left pointer one step to the right
            p1++;

            // Move the right pointer one step to the left
            p2--;
        }
    }
};

// Driver code
int main() {
    // Create a Solution object
    Solution sol;

    // Input array
    vector<int> arr = {1, 2, 3, 4, 5};

    // Call the reverse function
    sol.reverseArray(arr);

    // Print the reversed array
    for (int num : arr) {
        cout << num << " ";
    }

    return 0;
}

// Time Complexity: O(n), single-pass involved.
// Space Complexity: O(1) 