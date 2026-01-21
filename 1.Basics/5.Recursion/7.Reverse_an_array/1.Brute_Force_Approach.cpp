/*
Reverse a given Array

Practice:
Solve Problem
Problem Statement: You are given an array. The task is to reverse the array and print it. 

Examples:

    Example 1:
    Input: N = 5, arr[] = {5,4,3,2,1}
    Output: {1,2,3,4,5}
    Explanation: Since the order of elements gets reversed the first element 
    will occupy the fifth position, the second element occupies the fourth position and so on.

    Example 2:
    Input: N=6 arr[] = {10,20,30,40}
    Output: {40,30,20,10}
    Explanation: Since the order of elements gets reversed the first element 
    will occupy the fifth position, the second element occupies the fourth position and so on.

Brute Force Approach
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // Function to reverse an array
    vector<int> reverseArray(vector<int>& arr) {
        // Get the size of the array
        int n = arr.size();

        // Create a new vector to store the reversed array
        vector<int> ans(n);

        // Loop through the array from start to end
        for (int i = 0; i < n; i++) {
            // Place the element from end of arr into beginning of ans
            ans[i] = arr[n - 1 - i];
        }

        // Return the reversed array
        return ans;
    }
};

// Driver code
int main() {
    // Input array
    vector<int> arr = {1, 2, 3, 4, 5};

    // Create object of Solution class
    Solution obj;

    // Call the reverseArray function
    vector<int> result = obj.reverseArray(arr);

    // Print the reversed array
    cout << "Reversed Array: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}

// Time Complexity: O(n)
// Space Complexity: O(n)