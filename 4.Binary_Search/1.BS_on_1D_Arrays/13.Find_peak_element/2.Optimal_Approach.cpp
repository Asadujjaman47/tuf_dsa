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

Pre-requisite: Binary Search Algorithm

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

Optimal Approach(Using Binary Search): 
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // Function to find a peak element using binary search
    int findPeakElement(vector<int>& nums) {
        // Set left and right bounds
        int low = 0, high = nums.size() - 1;

        // Binary search loop
        while (low < high) {
            // Find mid point
            int mid = (low + high) / 2;

            // If mid element is greater than next
            if (nums[mid] > nums[mid + 1]) {
                // Move to left half
                high = mid;
            } else {
                // Move to right half
                low = mid + 1;
            }
        }

        // Return peak index
        return low;
    }
};

int main() {
    // Input array
    vector<int> nums = {1, 2, 1, 3, 5, 6, 4};

    // Create object
    Solution obj;

    // Output result
    cout << obj.findPeakElement(nums) << endl;

    return 0;
}

// Time Complexity: O(log N)
// Space Complexity: O(1)