/*
Find the highest/lowest frequency element

Problem Statement: Given an array of size N. Find the highest 
and lowest frequency element.

Pre-requisite: Hashing Theory and  Counting frequencies of array elements

Examples:

Example 1:
Input: array[] = {10,5,10,15,10,5};
Output: 10 15
Explanation: The frequency of 10 is 3, i.e. the highest and 
the frequency of 15 is 1 i.e. the lowest.

Example 2:

Input: array[] = {2,2,3,4,4,2};
Output: 2 3
Explanation: The frequency of 2 is 3, i.e. the highest and 
the frequency of 3 is 1 i.e. the lowest.

// Approach: Brute-Force approach(Using two loops)
*/

#include <bits/stdc++.h>
using namespace std;

// Class to count frequencies and find elements with max and min frequency
class FrequencyCounter {
public:
    void countFreq(int arr[], int n)
    {
        vector<bool> visited(n, false); // Track which elements have already been processed
        int maxFreq = 0, minFreq = n;   // Initialize frequency bounds
        int maxEle = 0, minEle = 0;     // Initialize elements with max and min frequency

        for (int i = 0; i < n; i++) {

            // Skip this element if it's already counted
            if (visited[i] == true)
                continue;

            // Count the frequency of arr[i]
            int count = 1;
            for (int j = i + 1; j < n; j++) {
                if (arr[i] == arr[j]) {
                    visited[j] = true; // Mark as visited to avoid recounting
                    count++;
                }
            }

            // Update max frequency and corresponding element
            if (count > maxFreq) {
                maxEle = arr[i];
                maxFreq = count;
            }

            // Update min frequency and corresponding element
            if (count < minFreq) {
                minEle = arr[i];
                minFreq = count;
            }
        }

        // Output the results
        cout << "The highest frequency element is: " << maxEle << "\n";
        cout << "The lowest frequency element is: " << minEle << "\n";
    }
};

int main()
{
    FrequencyCounter fc;                      // Create object of class
    int arr[] = {10, 5, 10, 15, 10, 5};       // Input array
    int n = sizeof(arr) / sizeof(arr[0]);    // Calculate array length
    fc.countFreq(arr, n);                    // Call the function
    return 0;
}

// Time Complexity: O(N*N)
// Space Complexity:  O(N)