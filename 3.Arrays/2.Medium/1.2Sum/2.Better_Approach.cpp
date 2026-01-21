/*
Two Sum : Check if a pair with given sum exists in Array

Problem Statement: Given an array of integers arr[] and an integer target.

1st variant: Return YES if there exist two numbers such that 
their sum is equal to the target. Otherwise, return NO.

2nd variant: Return indices of the two numbers such that 
their sum is equal to the target. Otherwise, we will return {-1, -1}.

Examples

Input: N = 5, arr[] = {2,6,5,8,11}, target = 14
Output : YES
Explanation: arr[1] + arr[3] = 14. So, the answer is “YES” for first variant for second variant output will be : [1,3].

Input: N = 5, arr[] = {2,6,5,8,11}, target = 15
Output : NO.
Explanation: There exist no such two numbers whose sum is equal to the target. 
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // Variant 1: Check if two numbers sum to target using hashing
    string twoSumExists(vector<int>& arr, int target) {
        unordered_map<int, int> mp;  // Map to store element -> index
        int n = arr.size();
        // Iterate over all elements
        for (int i = 0; i < n; i++) {
            int complement = target - arr[i];  // Needed value to reach target sum
            // Check if complement is already in map
            if (mp.find(complement) != mp.end()) {
                return "YES";  // Pair found
            }
            // Store current element with its index for future reference
            mp[arr[i]] = i;
        }
        // No pair found
        return "NO";
    }

    // Variant 2: Return indices of two numbers that sum to target using hashing
    vector<int> twoSumIndices(vector<int>& arr, int target) {
        unordered_map<int, int> mp;  // Map to store element -> index
        int n = arr.size();
        for (int i = 0; i < n; i++) {
            int complement = target - arr[i];
            // If complement found, return indices
            if (mp.find(complement) != mp.end()) {
                return {mp[complement], i};
            }
            // Store current element and index
            mp[arr[i]] = i;
        }
        return {-1, -1};  // No pair found
    }
};

int main() {
    Solution sol;
    vector<int> arr = {2, 6, 5, 8, 11};
    int target = 14;

    cout << sol.twoSumExists(arr, target) << "\n";
    vector<int> res = sol.twoSumIndices(arr, target);
    cout << "[" << res[0] << ", " << res[1] << "]\n";

    return 0;
}

// Time Complexity: O(N)
// Space Complexity: O(N) 