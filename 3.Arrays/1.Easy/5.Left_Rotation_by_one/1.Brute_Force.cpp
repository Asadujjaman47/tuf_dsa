/*
Left Rotate the Array by One

Problem Statement: Given an integer array nums, rotate the array to the left by one.

Note: There is no need to return anything, just modify the given array.

Examples
Example 1:
Input:
 nums = [1, 2, 3, 4, 5]  
Output:
 [2, 3, 4, 5, 1]  
Explanation:
 Initially, nums = [1, 2, 3, 4, 5]  
Rotating once to the left results in nums = [2, 3, 4, 5, 1].

Example 2:
Input:
 nums = [-1, 0, 3, 6]  
Output:
 [0, 3, 6, -1]  
Explanation:
 Initially, nums = [-1, 0, 3, 6]  
Rotating once to the left results in nums = [0, 3, 6, -1].

Solution 1: Brute force Approach
*/

#include<bits/stdc++.h>
using namespace std;

// Function to solve and shift array elements left by one position
void solve(int arr[], int n) {
    int temp[n];  // Create a temporary array to store the shifted elements

    // Shift the elements to the left by one position
    for (int i = 1; i < n; i++) {
        temp[i - 1] = arr[i];
    }
    temp[n - 1] = arr[0];  // The first element moves to the last position

    // Print the rotated array
    for (int i = 0; i < n; i++) {
        cout << temp[i] << " ";  // Print each element of the rotated array
    }
    cout << endl;
}

int main() {
    int n = 5;  // Size of the array
    int arr[] = {1, 2, 3, 4, 5};  // Original array

    solve(arr, n);  // Call the solve function to rotate and print the result

    return 0;
}

// Time Complexity: O(n)
// Space Complexity: O(n) 