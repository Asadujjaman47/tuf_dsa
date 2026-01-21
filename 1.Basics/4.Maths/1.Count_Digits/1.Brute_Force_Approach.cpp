/*
Count digits in a number

Problem Statement: Given an integer N, return the number of digits in N.

Examples
                Example 1:
                Input:N = 12345
               
                Output:5
                
                Explanation:  The number 12345 has 5 digits.
                                        
                Example 2:
                Input:N = 7789                
                
                Output: 4
                
                Explanation: The number 7789 has 4 digits.   
                
Brute Force Approach:                
*/

#include <iostream>
using namespace std;

// Function to count the number
// of digits in an integer 'n'.
int countDigits(int n) {
    // Initialize a counter variable
    // 'cnt' to store the count of digits.
    int cnt = 0;
    // While loop iterates until 'n'
    // becomes 0 (no more digits left).
    while (n > 0) {
        // Increment the counter
        // for each digit encountered.
        cnt = cnt + 1;
        // Divide 'n' by 10 to
        // remove the last digit.
        n = n / 10;
    }
    // Return the
    // count of digits.
    return cnt;
}

int main() {
    int N = 329823;
    cout << "N: " << N << endl;
    int digits = countDigits(N);
    cout << "Number of Digits in N: " << digits << endl;
    return 0;
}

// Time Complexity: O(log10N + 1)
// Space Complexity : O(1)