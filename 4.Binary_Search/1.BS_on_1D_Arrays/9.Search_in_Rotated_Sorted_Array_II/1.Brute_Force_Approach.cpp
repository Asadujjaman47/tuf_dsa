/*
Search Element in Rotated Sorted Array II

Problem Statement: Given an integer array arr of size N, 
sorted in ascending order (may contain duplicate values) 
and a target value k. 
Now the array is rotated at some pivot point unknown to you. 
Return True if k is present and otherwise, return False. 

Pre-requisite: Search Element in Rotated Sorted Array I 
& Binary Search algorithm

Examples

Example 1:
Input Format: arr = [7, 8, 1, 2, 3, 3, 3, 4, 5, 6], k = 3
Result: True
Explanation: The element 3 is present in the array. So, the answer is True.

Example 2:
Input Format: arr = [7, 8, 1, 2, 3, 3, 3, 4, 5, 6], k = 10
Result: False
Explanation: The element 10 is not present in the array. 
So, the answer is False.

Naive Approach (Brute force): 
*/

#include <bits/stdc++.h>
using namespace std;

// Class to encapsulate search logic
class Solution {
public:
    // Linear search in rotated sorted array (with duplicates)
    bool searchInARotatedSortedArrayII(vector<int>& arr, int k) {
        int n = arr.size(); // size of the array
        for (int i = 0; i < n; i++) {
            if (arr[i] == k) return true; // if found, return true
        }
        return false; // not found
    }
};

int main() {
    vector<int> arr = {7, 8, 1, 2, 3, 3, 3, 4, 5, 6};
    int k = 3;

    // Create object of Solution class
    Solution obj;
    bool ans = obj.searchInARotatedSortedArrayII(arr, k);

    // Print result
    if (!ans)
        cout << "Target is not present.\n";
    else
        cout << "Target is present in the array.\n";

    return 0;
}

// Time Complexity: O(N)
// Space Complexity: O(1)