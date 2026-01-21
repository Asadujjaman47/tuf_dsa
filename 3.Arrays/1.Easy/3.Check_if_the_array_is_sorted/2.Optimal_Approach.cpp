/*
Check if an Array is Sorted

Problem Statement: Given an array of size n, write a program to check 
if the given array is sorted in (ascending / Increasing / Non-decreasing) order or not. 
If the array is sorted then return True, Else return False.

Note: Two consecutive equal values are considered to be sorted.

Examples

Example 1:
Input: N = 5, array[] = {1,2,3,4,5}
Output: True.
Explanation: The given array is sorted i.e Every element in the array is smaller than 
or equals to its next values, So the answer is True.


Example 2:
Input: N = 5, array[] = {5,4,6,7,8}
Output: False.
Explanation: The given array is Not sorted i.e Every element in the array is not smaller than 
or equal to its next values, So the answer is False.

Here element 5 is not smaller than or equal to its future elements.

Optimal Approach:
*/

#include<bits/stdc++.h>
using namespace std;

// Function to check if the array is sorted
bool isSorted(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        if (arr[i] < arr[i - 1])  // If any element is smaller than the previous one, return false
            return false;
    }

    return true;  // Return true if the array is sorted
}

int main() {
    int arr[] = {1, 2, 3, 4, 5}, n = 5;
    printf("%s", isSorted(arr, n) ? "True" : "False");  // Output result
}

// Time Complexity: O(N)
// Space Complexity: O(1)