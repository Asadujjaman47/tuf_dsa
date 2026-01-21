/*
Search Element in a Rotated Sorted Array

Problem Statement: Given an integer array nums, 
sorted in ascending order (with distinct values) 
and a target value k. 
The array is rotated at some pivot point that is unknown. 
Find the index at which k is present and if k is not present return -1.

Examples
Input:nums = [4, 5, 6, 7, 0, 1, 2], k = 0
Output :4
Explanation : Here, the target is 0. 
We can see that 0 is present in the given rotated sorted array, nums. 
Thus, we get output as 4, which is the index at which 0 is present in the array.

Input: nums = [4, 5, 6, 7, 0, 1, 2], k = 3
Output :-1
Explanation :Here, the target is 3. 
Since 3 is not present in the given rotated sorted array. 
Thus, we get the output as -1.

Naive Approach (Brute force): 
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // Function to search target in rotated sorted array using brute force
    int search(vector<int>& nums, int target) {

        // Loop through each element in the array
        for (int i = 0; i < nums.size(); i++) {

            // If current element matches target, return index
            if (nums[i] == target) {
                return i;
            }
        }

        // If not found, return -1
        return -1;
    }
};

// Driver code
int main() {
    vector<int> nums = {4, 5, 6, 7, 0, 1, 2};
    int target = 0;

    Solution obj;
    int index = obj.search(nums, target);

    cout << index << endl;

    return 0;
}

// Time Complexity: O(N)
// Space Complexity: O(1)