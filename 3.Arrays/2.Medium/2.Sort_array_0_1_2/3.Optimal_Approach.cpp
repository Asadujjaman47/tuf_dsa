/**
Sort an array of 0s, 1s and 2s

Problem Statement: Given an array nums consisting of only 0, 1, or 2. 
Sort the array in non-decreasing order. The sorting must be done in-place, 
without making a copy of the original array.

Examples
Input: nums = [1, 0, 2, 1, 0]
Output: [0, 0, 1, 1, 2]
Explanation: The nums array in sorted order has 2 zeroes, 2 ones and 1 two

Input: nums = [0, 0, 1, 1, 1]
Output: [0, 0, 1, 1, 1]
Explanation: The nums array in sorted order has 2 zeroes, 3 ones and zero twos.


Optimal Approach:
Dutch National flag algorithm:
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // Function to sort array containing 0s, 1s, and 2s using Dutch National Flag Algorithm
    void sortZeroOneTwo(vector<int>& nums) {
        // Initialize three pointers: low, mid starting from 0, high from end of array
        int low = 0, mid = 0, high = nums.size() - 1;

        // Process elements until mid pointer crosses high pointer
        while (mid <= high) {
            // If current element is 0, swap with low and move both pointers forward
            if (nums[mid] == 0) {
                swap(nums[mid], nums[low]);
                mid++;
                low++;
            }
            // If current element is 1, it's already in correct place → move mid forward
            else if (nums[mid] == 1) {
                mid++;
            }
            // If current element is 2, swap with high and move only high pointer backward
            else {
                swap(nums[mid], nums[high]);
                high--;
            }
        }
    }
};

// Driver code
int main() {
    Solution obj;
    vector<int> nums = {2, 0, 2, 1, 1, 0};

    obj.sortZeroOneTwo(nums);

    for (int val : nums)
        cout << val << " ";

    return 0;
}

// Time Complexity: O(N)
// Space Complexity: O(1)