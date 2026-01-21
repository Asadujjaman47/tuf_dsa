/*
Count frequency of each element in the array

Problem statement: Given an array, we have found the number of occurrences 
of each element in the array.

Examples:

Example 1:
Input: arr[] = {10,5,10,15,10,5};
Output: 10  3
	 5  2
        15  1
Explanation: 10 occurs 3 times in the array
	      5 occurs 2 times in the array
              15 occurs 1 time in the array

Example2: 
Input: arr[] = {2,2,3,4,4,2};
Output: 2  3
	3  1
        4  2
Explanation: 2 occurs 3 times in the array
	     3 occurs 1 time in the array
             4 occurs 2 time in the array

// Solution 2: Using Map
*/

#include <bits/stdc++.h>
using namespace std;

// Function to count frequency of each element in the array using unordered_map
void Frequency(int arr[], int n) {
    // Create an unordered_map to store frequency of each element
    unordered_map<int, int> map;

    // Traverse the array and count frequencies
    for (int i = 0; i < n; i++) {
        map[arr[i]]++;
    }

    // Traverse through the unordered_map and print frequencies
    for (auto x : map) {
        cout << x.first << " " << x.second << endl;
    }
}

int main() {
    // Input array
    int arr[] = {10, 5, 10, 15, 10, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Call the function to count frequencies
    Frequency(arr, n);
    return 0;
}

// Time Complexity: O(N)
// Space Complexity: O(n)