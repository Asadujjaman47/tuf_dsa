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

// Function to find rotation count using one-pass scan
int findRotationCount(vector<int> &arr) {
    // Get the size of the array
    int n = arr.size();
    // Traverse the array till second-last element
    for (int i = 0; i < n - 1; i++) {
        // If current element is greater than the next, break point found
        if (arr[i] > arr[i + 1]) {
            // Rotation count is index of next element
            return i + 1;
        }
    }
    // If no break point found, array not rotated
    return 0;
}

int main() {
    // Example input
    vector<int> arr = {3, 4, 5, 1, 2};
    // Function call to get rotation count
    int rotations = findRotationCount(arr);
    // Output the result
    cout << rotations << endl;
    return 0;
}

// Time Complexity: O(n)
// Space Complexity: O(1)