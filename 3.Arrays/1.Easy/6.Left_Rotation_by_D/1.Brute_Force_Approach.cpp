/*
Rotate array by K elements

Problem Statement: Given an array of integers, rotating array of elements by k elements either left or right.

Examples
Input : nums = [1, 2, 3, 4, 5, 6, 7], k = 2, right
Output : [6, 7, 1, 2, 3, 4, 5]
Explanation : rotate 1 step to the right: [7, 1, 2, 3, 4, 5, 6]
rotate 2 steps to the right: [6, 7, 1, 2, 3, 4, 5] 

Input : nums = [1, 2, 3, 4, 5, 6], k=2, left
Output : [3, 4, 5, 6, 1, 2]
Explanation :rotate 1 step to the left: [2, 3, 4, 5, 6, 1]
rotate 2 steps to the left: [3, 4, 5, 6, 1, 2]

*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // Function to rotate the array to the right by k positions
    void rotateRight(int arr[], int n, int k) {
        if (n == 0) return;

        // Normalize k if greater than n
        k = k % n;

        // Store last k elements in a temporary array
        int temp[k];
        for (int i = n - k; i < n; i++) {
            temp[i - n + k] = arr[i];
        }

        // Shift the first n-k elements to the right by k steps
        for (int i = n - k - 1; i >= 0; i--) {
            arr[i + k] = arr[i];
        }

        // Copy back the k elements to the start
        for (int i = 0; i < k; i++) {
            arr[i] = temp[i];
        }
    }

    // Function to rotate the array to the left by k positions
    void rotateLeft(int arr[], int n, int k) {
        if (n == 0) return;

        // Normalize k if greater than n
        k = k % n;

        // Store first k elements in temporary array
        int temp[k];
        for (int i = 0; i < k; i++) {
            temp[i] = arr[i];
        }

        // Shift remaining elements to the left by k positions
        for (int i = k; i < n; i++) {
            arr[i - k] = arr[i];
        }

        // Copy back the stored elements to the end
        for (int i = 0; i < k; i++) {
            arr[n - k + i] = temp[i];
        }
    }
};

// Driver code
int main() {
    Solution sol;

    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 2;

    sol.rotateRight(arr, n, k);
    cout << "Array after right rotation by " << k << " steps:\n";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";

    cout << "\n";

    // Reset array for left rotation demo
    int arr2[] = {1, 2, 3, 4, 5, 6, 7};
    sol.rotateLeft(arr2, n, k);
    cout << "Array after left rotation by " << k << " steps:\n";
    for (int i = 0; i < n; i++) cout << arr2[i] << " ";

    return 0;
}


// Time Complexity: O(n)
// Space Complexity: O(k)