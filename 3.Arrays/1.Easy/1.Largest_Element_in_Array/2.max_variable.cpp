/*
Find the Largest element in an array

Problem Statement: Given an array, we have to find the largest element in the array.

Examples

Example 1:
Input: arr[] = {2,5,1,3,0};
Output: 5
Explanation: 5 is the largest element in the array. 

Example2: 
Input: arr[] = {8,10,5,7,9};
Output: 10
Explanation: 10 is the largest element in the array. 

Recursive Approach:
Solution2: Using a max variable
*/

#include <bits/stdc++.h>
using namespace std;

// Function to find the largest element in the array
int findLargestElement(int arr[], int n) {
    int max = arr[0];  // Initialize max with the first element in the array

    // Iterate through the array to find the maximum element
    for (int i = 1; i < n; i++) {
        if (max < arr[i]) {  // If the current element is greater than max, update max
            max = arr[i];
        }
    }

    return max;  // Return the largest element found
}

int main() {
    // Array 1
    int arr1[] = {2, 5, 1, 3, 0};
    int n = 5;  // Size of the array
    int max = findLargestElement(arr1, n);  // Call the function to find the largest element
    cout << "The largest element in the array is: " << max << endl;  // Output the result

    // Array 2
    int arr2[] = {8, 10, 5, 7, 9};
    n = 5;  // Size of the array
    max = findLargestElement(arr2, n);  // Call the function to find the largest element
    cout << "The largest element in the array is: " << max << endl;  // Output the result

    return 0;
}

// Time Complexity: O(N)
// Space Complexity: O(1)
