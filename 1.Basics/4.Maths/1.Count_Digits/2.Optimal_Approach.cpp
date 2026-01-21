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
                
Optimal Approach:
*/

#include <iostream>
#include <cmath>
using namespace std;

// Calculate the count of digits in 'n'
// using logarithmic operation log10(n) + 1.
int countDigits(int n) {
    // Initialize a variable 'cnt' to
    // store the count of digits.
    int cnt = (int)(log10(n) + 1);

    // The expression (int)(log10(n)+1)
    // calculates the number of digits in 'n'
    // and casts it to an integer.

    // Adding 1 to the result accounts
    // for the case when 'n' is a power of 10,
    // ensuring that the count is correct.

    // Finally, the result is cast
    // to an integer to ensure it is rounded
    // down to the nearest whole number.

    // Return the count of digits in 'n'.
    return cnt;
}

int main() {
    int N = 329823;
    cout << "N: " << N << endl;
    int digits = countDigits(N);
    cout << "Number of Digits in N: " << digits << endl;
    return 0;
}

// Time Complexity: O(1)
// Space Complexity : O(1)