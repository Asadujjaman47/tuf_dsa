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


Built-in Library Function Approach 
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // Function to reverse the array using STL reverse function
    void reverseArray(vector<int>& arr) {
        // Use STL reverse to reverse array in-place
        reverse(arr.begin(), arr.end());
    }
};

// Driver code
int main() {
    // Input array
    vector<int> arr = {1, 2, 3, 4, 5};

    // Create Solution object
    Solution obj;

    // Call function to reverse the array
    obj.reverseArray(arr);

    // Output the reversed array
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}

// Time Complexity: O(n)
// Space Complexity: O(1)