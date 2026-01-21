/*
Search Single Element in a sorted array

Problem Statement: Given an array of N integers. 
Every number in the array except one appears twice. 
Find the single number in the array.

Examples

Example 1:
Input Format: arr[] = {1,1,2,2,3,3,4,5,5,6,6}
Result: 4
Explanation: Only the number 4 appears once in the array.

Example 2:

Input Format: arr[] = {1,1,3,5,5}
Result: 3
Explanation: Only the number 3 appears once in the array.


Naive Approach(Using XOR): 
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // Function to find the single non-duplicate element using XOR
    int singleNonDuplicate(vector<int>& arr) {
        // Get the size of the array
        int n = arr.size();

        // Initialize the result variable with 0
        int ans = 0;

        // Traverse the array and XOR all elements
        for (int i = 0; i < n; i++) {
            ans = ans ^ arr[i];
        }

        // Return the unique element found using XOR
        return ans;
    }
};

// Driver code
int main() {
    // Input array with all elements occurring twice except one
    vector<int> arr = {1, 1, 2, 2, 3, 3, 4, 5, 5, 6, 6};

    // Create an object of Solution class
    Solution obj;

    // Call the function and store the result
    int ans = obj.singleNonDuplicate(arr);

    // Print the result
    cout << "The single element is: " << ans << "\n";

    return 0;
}

// Time Complexity: O(N)
// Space Complexity: O(1)