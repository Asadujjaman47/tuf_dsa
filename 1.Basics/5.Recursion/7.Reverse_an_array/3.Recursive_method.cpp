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

// Solution 3: Recursive method
*/

#include <bits/stdc++.h>
using namespace std;

// Function to print array
void printArray(int arr[], int n) {
    cout << "The reversed array is:- " << "\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}

// Function to reverse array using recursion
void reverseArray(int arr[], int start, int end) {
    if (start < end) {
        swap(arr[start], arr[end]);
        reverseArray(arr, start + 1, end - 1);
    }
}

int main() {
    int n = 5;
    int arr[] = {5, 4, 3, 2, 1};
    reverseArray(arr, 0, n - 1);
    printArray(arr, n);
    return 0;
}

// Time Complexity: O(n)
// Space Complexity: O(1)