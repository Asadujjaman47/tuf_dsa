/*
Union of Two Sorted Arrays

Problem Statement: Given two sorted arrays, arr1, and arr2 of size n and m. 
Find the union of two sorted arrays.

The union of two arrays can be defined as the common 
and distinct elements in the two arrays.

NOTE: Elements in the union should be in ascending order.

Examples

Input:n = 5,m = 5 arr1[] = {1,2,3,4,5}  arr2[] = {2,3,4,4,5}
Output: {1,2,3,4,5}
Explanation: Common Elements in arr1 and arr2  are:  2,3,4,5
Distnict Elements in arr1 are : 1
Distnict Elemennts in arr2 are : No distinct elements.
Union of arr1 and arr2 is {1,2,3,4,5}

Input:n = 10,m = 7,arr1[] = {1,2,3,4,5,6,7,8,9,10}arr2[] = {2,3,4,4,5,11,12}
Output: {1,2,3,4,5,6,7,8,9,10,11,12}
Explanation: Common Elements in arr1 and arr2  are:  2,3,4,5
Distnict Elements in arr1 are : 1,6,7,8,9,10
Distnict Elemennts in arr2 are : 11,12
Union of arr1 and arr2 is {1,2,3,4,5,6,7,8,9,10,11,12}

Solution 1: Using Map
*/

#include <bits/stdc++.h>
using namespace std;

// Define the Solution class
class Solution {
public:
    // Function to find union of two arrays
    vector<int> FindUnion(int arr1[], int arr2[], int n, int m) {
        // Create a map to store frequency of each element
        map<int, int> freq;
        // Create a vector to store the union result
        vector<int> Union;
        // Loop through first array and store frequency
        for (int i = 0; i < n; i++)
            freq[arr1[i]]++;
        // Loop through second array and store frequency
        for (int i = 0; i < m; i++)
            freq[arr2[i]]++;
        // Traverse the map to get unique sorted elements
        for (auto &it : freq)
            Union.push_back(it.first);
        // Return the union vector
        return Union;
    }
};

int main() {
    // Define size of first array
    int n = 10;
    // Define size of second array
    int m = 7;
    // Initialize first array
    int arr1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    // Initialize second array
    int arr2[] = {2, 3, 4, 4, 5, 11, 12};
    // Create object of Solution class
    Solution obj;
    // Call FindUnion function
    vector<int> Union = obj.FindUnion(arr1, arr2, n, m);
    // Print output message
    cout << "Union of arr1 and arr2 is " << endl;
    // Print all elements of union
    for (auto &val : Union)
        cout << val << " ";
    // Return success
    return 0;
}

// Time Compleixty : O( (m+n)log(m+n) )
// Space Complexity : O(m+n)