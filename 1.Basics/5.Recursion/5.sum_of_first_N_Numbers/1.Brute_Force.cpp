/*
Sum of first N Natural Numbers

Problem statement: Given a number ‘N’, find out the sum of the first N natural numbers.

Examples:

    Example 1:
    Input: N=5
    Output: 15
    Explanation: 1+2+3+4+5=15

    Example 2:
    Input: N=6
    Output: 21
    Explanation: 1+2+3+4+5+6=15

Brute Force Approach 
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // Function to find sum of first N natural numbers using loop
    int sumOfNaturalNumbers(int N) {
        // Initialize sum to 0
        int sum = 0;

        // Loop from 1 to N
        for (int i = 1; i <= N; i++) {
            // Add current number to sum
            sum += i;
        }

        // Return the computed sum
        return sum;
    }
};

// Driver code
int main() {
    // Create object of Solution class
    Solution obj;

    // Input value for N
    int N;
    cin >> N;

    // Call the function and store the result
    int result = obj.sumOfNaturalNumbers(N);

    // Print the result
    cout << result << endl;
    return 0;
}


// Time Complexity: O(N)
// Space Complexity: O(1)