/**
Binary Search to find X in sorted array
 
Problem statement: You are given a sorted array of integers and a target, 
your task is to search for the target in the given array. 
Assume the given array does not contain any duplicate numbers.

Let’s say the given array is = {3, 4, 6, 7, 9, 12, 16, 17} and target = 6.


Iterative Implementation:
 */


#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // Function to perform Binary Search on sorted array
    int binarySearch(vector<int>& nums, int target) {
        int n = nums.size(); // size of the array
        int low = 0, high = n - 1;

        // Keep searching until low crosses high
        while (low <= high) {
            int mid = (low + high) / 2; // Find the middle index
            if (nums[mid] == target) return mid;       // Target found
            else if (target > nums[mid]) low = mid + 1; // Search in right half
            else high = mid - 1;                        // Search in left half
        }
        return -1; // Target not found
    }
};

int main()
{
    vector<int> a = {3, 4, 6, 7, 9, 12, 16, 17}; // sorted array
    int target = 6; // target element to search

    Solution obj; // Create object of Solution class
    int ind = obj.binarySearch(a, target);

    if (ind == -1) cout << "The target is not present." << endl;
    else cout << "The target is at index: " << ind << endl;

    return 0;
}

// Time Complexity: Olog(N)
// Space Complexity: 0(1)