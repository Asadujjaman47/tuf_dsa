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

Optimal Approach 1: Summation Approach
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // Function to find the missing number using sum formula
    int missingNumber(vector<int>& a, int N) {
        // Sum of first N natural numbers using formula: N*(N+1)/2
        int sum = (N * (N + 1)) / 2;

        // Sum of elements present in the array
        int s2 = 0;
        for (int i = 0; i < N - 1; i++) {
            s2 += a[i];
        }

        // The missing number is the difference between expected and actual sum
        return sum - s2;
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
// Space Complexity: O(3N)