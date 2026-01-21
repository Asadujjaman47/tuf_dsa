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

Naive Approach(Brute-force approach):
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // Function to find the missing number in the array
    int missingNumber(vector<int>& a, int N) {
        // Loop through numbers from 1 to N
        for (int i = 1; i <= N; i++) {
            int flag = 0; // To check if i exists in array

            // Linear search to check if i is in the array
            for (int j = 0; j < N - 1; j++) {
                if (a[j] == i) {
                    flag = 1; // i is found
                    break;
                }
            }

            // If i was not found, it is the missing number
            if (flag == 0) return i;
        }

        // Control should never reach here
        return -1;
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

// Time Complexity: O(N*N)
// Space Complexity: O(1)