/*
Find out how many times the array has been rotated

Problem Statement: Given an integer array arr of size N, 
sorted in ascending order (with distinct values). 
Now the array is rotated between 1 to N times which is unknown. 
Find how many times the array has been rotated. 

Pre-requisites: Find minimum in Rotated Sorted Array,  
Search in Rotated Sorted Array II & Binary Search algorithm

Examples

Example 1:
Input Format: arr = [4,5,6,7,0,1,2,3]
Result: 4
Explanation: The original array should be [0,1,2,3,4,5,6,7]. 
So, we can notice that the array has been rotated 4 times.

Example 2:
Input Format: arr = [3,4,5,1,2]
Result: 3
Explanation: The original array should be [1,2,3,4,5]. 
So, we can notice that the array has been rotated 3 times.

Brute Force Approach:
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // Function to find the number of rotations in a rotated sorted array
    int findRotations(vector<int>& arr) {
        // Store size of array
        int n = arr.size();

        // Assume the first element is the smallest
        int minVal = arr[0];

        // Index of the smallest element
        int minIndex = 0;

        // Traverse the array
        for (int i = 1; i < n; i++) {
            // If current element is smaller than minVal, update
            if (arr[i] < minVal) {
                minVal = arr[i];
                minIndex = i;
            }
        }

        // The index of smallest element = number of rotations
        return minIndex;
    }
};

int main() {
    Solution obj;

    // Example input
    vector<int> arr = {4,5,6,7,0,1,2,3};

    // Call the function and store result
    int rotations = obj.findRotations(arr);

    // Print result
    cout << rotations << endl;
    return 0;
}

// Time Complexity: O(n)
// Space Complexity: O(1)