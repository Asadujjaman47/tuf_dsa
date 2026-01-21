/*
Peak element in Array

Problem Statement: Given an array of length N. 
Peak element is defined as the element greater than both of its neighbors. 
Formally, if 'arr[i]' is the peak element, 'arr[i - 1]' < 'arr[i]' 
and 'arr[i + 1]' < 'arr[i]'. 
Find the index(0-based) of a peak element in the array. 
If there are multiple peak numbers, return the index of any peak number.

Note: For the first element, the previous element should be considered 
as negative infinity as well as for the last element, 
the next element should be considered as negative infinity.

Examples

Example 1:
Input Format: arr[] = {1,2,3,4,5,6,7,8,5,1}
Result: 7
Explanation: In this example, there is only 1 peak that is at index 7.

Example 2:
Input Format: arr[] = {1,2,1,3,5,6,4}
Result: 1
Explanation: In this example, there are 2 peak numbers that are at indices 1 
and 5. We can consider any of them.

Example 3:
Input Format: arr[] = {1, 2, 3, 4, 5}
Result: 4
Explanation: In this example, there is only 1 peak that is at the index 4.

Example 4:
Input Format: arr[] = {5, 4, 3, 2, 1}
Result: 0
Explanation: In this example, there is only 1 peak that is at the index 0.

Naive Approach: 
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // Function to find a peak element in the array
    int findPeakElement(vector<int>& nums) {
        int n = nums.size();
        
        // Traverse the array
        for (int i = 0; i < n; i++) {
            // Check left neighbor if exists
            bool left = (i == 0) || (nums[i] >= nums[i - 1]);
            // Check right neighbor if exists
            bool right = (i == n - 1) || (nums[i] >= nums[i + 1]);
            
            // If both sides are valid, return index
            if (left && right) return i;
        }

        // In case no peak found (shouldn't happen)
        return -1;
    }
};

// Driver
int main() {
    Solution sol;
    vector<int> nums = {1, 3, 20, 4, 1, 0};
    int index = sol.findPeakElement(nums);
    cout << "Peak at index: " << index << " with value: " << nums[index] << endl;
    return 0;
}

// Time Complexity: O(N)
// Space Complexity: O(1)