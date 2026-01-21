/*
Find Second Smallest and Second Largest Element in an array

Problem Statement: Given an array, find the second smallest 
and second largest element in the array. 
Print ‘-1’ in the event that either of them doesn’t exist.

Examples

Example 1:
Input: [1,2,4,7,7,5]
Output: Second Smallest : 2
	Second Largest : 5
Explanation: The elements are as follows 1,2,3,5,7,7 
and hence second largest of these is 5 and second smallest is 2

Example 2:
Input: [1]
Output: Second Smallest : -1
	Second Largest : -1
Explanation: Since there is only one element in the array, 
it is the largest and smallest element present in the array. 
There is no second largest or second smallest element present.

Optimal Approach
*/

#include<bits/stdc++.h>
using namespace std;

// Function to find the second smallest element in the array
int secondSmallest(int arr[], int n) {
    // Edge case: if the array has fewer than 2 elements
    if (n < 2)
        return -1;

    int small = INT_MAX;
    int second_small = INT_MAX;

    // Loop through the array to find the second smallest element
    for (int i = 0; i < n; i++) {
        // Update the smallest and second smallest values
        if (arr[i] < small) {
            second_small = small;
            small = arr[i];
        } 
        else if (arr[i] < second_small && arr[i] != small) {
            second_small = arr[i];
        }
    }
    return second_small; // Return the second smallest element
}

// Function to find the second largest element in the array
int secondLargest(int arr[], int n) {
    // Edge case: if the array has fewer than 2 elements
    if (n < 2)
        return -1;

    int large = INT_MIN, second_large = INT_MIN;

    // Loop through the array to find the second largest element
    for (int i = 0; i < n; i++) {
        // Update the largest and second largest values
        if (arr[i] > large) {
            second_large = large;
            large = arr[i];
        } 
        else if (arr[i] > second_large && arr[i] != large) {
            second_large = arr[i];
        }
    }
    return second_large; // Return the second largest element
}

int main() {
    // Array of elements
    int arr[] = {1, 2, 4, 7, 7, 5};  

    // Calculate the size of the array
    int n = sizeof(arr) / sizeof(arr[0]);

    // Find the second smallest and second largest elements
    int sS = secondSmallest(arr, n);
    int sL = secondLargest(arr, n);

    // Output the results
    cout << "Second smallest is " << sS << endl;
    cout << "Second largest is " << sL << endl;

    return 0;
}

// Time Complexity: O(N)
// Space Complexity: O(1)