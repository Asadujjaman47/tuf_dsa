/*
Find the number that appears once, and the other numbers twice

Problem Statement: Given a non-empty array of integers arr, 
every element appears twice except for one. Find that single one.

Examples

Example 1:
Input Format: arr[] = {2,2,1}
Result: 1
Explanation: In this array, only the element 1 appear once and so it is the answer.

Example 2:
Input Format: arr[] = {4,1,2,1,2}
Result: 4
Explanation: In this array, only element 4 appear once 
and the other elements appear twice. So, 4 is the answer.

Hashing using the map data structure: 
*/

#include<bits/stdc++.h>
using namespace std;


int getSingleElement(vector<int> &arr) {
    // Size of the array:
    int n = arr.size();

    // Declare the hashmap.
    // And hash the given array:
    map<int, int> mpp;
    for (int i = 0; i < n; i++) {
        mpp[arr[i]]++;
    }

    // Find the single element and return the answer:
    for (auto it : mpp) {
        if (it.second == 1)
            return it.first;
    }

    // This line will never execute
    // if the array contains a single element.
    return -1;
}

int main() {
    vector<int> arr = {4, 1, 2, 1, 2};
    int ans = getSingleElement(arr);
    cout << "The single element is: " << ans << endl;
}

// Time Complexity: O(N*logM) + O(M),
// Space Complexity: O(M)