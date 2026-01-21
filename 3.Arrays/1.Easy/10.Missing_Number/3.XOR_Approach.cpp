/*
Find the missing number in an array

Problem Statement: Given an integer N and an array of size N-1 containing N-1 numbers 
between 1 to N. Find the number(between 1 to N), that is not present in the given array.

Examples

Example 1:
Input Format: N = 5, array[] = {1,2,4,5}
Result: 3
Explanation: In the given array, number 3 is missing. So, 3 is the answer.

Example 2:
Input Format: N = 3, array[] = {1,3}
Result: 2
Explanation: In the given array, number 2 is missing. So, 2 is the answer.

Optimal Approach 2: XOR Approach
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // Function to find the missing number using XOR approach
    int missingNumber(vector<int>& a, int N) {
        int xor1 = 0, xor2 = 0;

        // XOR all the array elements and numbers from 1 to N-1
        for (int i = 0; i < N - 1; i++) {
            xor2 = xor2 ^ a[i];      // XOR of array elements
            xor1 = xor1 ^ (i + 1);   // XOR of numbers from 1 to N-1
        }

        xor1 = xor1 ^ N; // Include N in the XOR

        // XOR of xor1 and xor2 gives the missing number
        return xor1 ^ xor2;
    }
};

int main() {
    int N = 5;
    vector<int> a = {1, 2, 4, 5};

    Solution obj;
    int ans = obj.missingNumber(a, N);
    cout << "The missing number is: " << ans << endl;

    return 0;
}

// Time Complexity: O(N)
// Space Complexity: O(1)