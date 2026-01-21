/*
Minimum in Rotated Sorted Array

Problem Statement: Given an integer array arr of size N, 
sorted in ascending order (with distinct values). 
Now the array is rotated between 1 to N times which is unknown. 
Find the minimum element in the array. 

Pre-requisites: Search in Rotated Sorted Array I,  
Search in Rotated Sorted Array II & Binary Search algorithm

Examples

Example 1:
Input Format: arr = [4,5,6,7,0,1,2,3]
Result: 0
Explanation: Here, the element 0 is the minimum element in the array.

Example 2:
Input Format: arr = [3,4,5,1,2]
Result: 1
Explanation: Here, the element 1 is the minimum element in the array.


Naive Approach (Brute force): 
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // Function to find the minimum element using linear search
    int findMin(vector<int>& nums) {

        // Initialize answer with a large number
        int minVal = INT_MAX;

        // Traverse each element
        for (int i = 0; i < nums.size(); i++) {

            // Update minimum value
            minVal = min(minVal, nums[i]);
        }

        // Return the result
        return minVal;
    }
};

int main() {

    // Input array
    vector<int> nums = {4, 5, 6, 7, 0, 1, 2};

    // Create object of Solution
    Solution sol;

    // Call function and store result
    int result = sol.findMin(nums);

    // Output the result
    cout << "Minimum element is " << result << endl;

    return 0;
}

// Time Complexity: O(N)
// Space Complexity: O(1)