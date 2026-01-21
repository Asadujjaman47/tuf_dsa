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

Naive Approach(Brute-force approach): 
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // Function to find the single non-repeating element using brute force
    int getSingleElement(vector<int>& arr) {
        int n = arr.size();

        // Loop through every element
        for (int i = 0; i < n; i++) {
            int num = arr[i]; // current element to check
            int cnt = 0;

            // Count occurrences of this element
            for (int j = 0; j < n; j++) {
                if (arr[j] == num)
                    cnt++;
            }

            // If it occurs only once, return it
            if (cnt == 1) return num;
        }

        // This line should never be reached
        return -1;
    }
};

int main() {
    vector<int> arr = {4, 1, 2, 1, 2};

    Solution obj;
    int ans = obj.getSingleElement(arr);

    cout << "The single element is: " << ans << endl;

    return 0;
}

// Time Complexity: O(N2)
// Space Complexity: O(1)