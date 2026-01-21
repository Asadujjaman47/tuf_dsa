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

Optimized approach(Using map):
*/

#include <bits/stdc++.h>
using namespace std;

// Class to count frequencies using unordered_map (hash table)
class FrequencyCounter {
public:
    void Frequency(int arr[], int n)
    {
        unordered_map<int, int> map; // Stores frequency of each element

        // Count frequencies of all elements
        for (int i = 0; i < n; i++)
            map[arr[i]]++;

        int maxFreq = 0, minFreq = n;
        int maxEle = 0, minEle = 0;

        // Traverse the map to find elements with max and min frequencies
        for (auto it : map) {
            int element = it.first;
            int count = it.second;

            // Update max frequency element
            if (count > maxFreq) {
                maxFreq = count;
                maxEle = element;
            }

            // Update min frequency element
            if (count < minFreq) {
                minFreq = count;
                minEle = element;
            }
        }

        // Print results
        cout << "The highest frequency element is: " << maxEle << "\n";
        cout << "The lowest frequency element is: " << minEle << "\n";
    }
};

int main()
{
    FrequencyCounter fc;                       // Create object of the class
    int arr[] = {10, 5, 10, 15, 10, 5};        // Sample input array
    int n = sizeof(arr) / sizeof(arr[0]);     // Determine length of array
    fc.Frequency(arr, n);                     // Call the function
    return 0;
}

// Time Complexity: O(N)
// Space Complexity:  O(N)