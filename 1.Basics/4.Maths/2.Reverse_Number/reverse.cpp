/*
Reverse Digits of A Number

Problem Statement: Given an integer N return the reverse of the given number.

Note: If a number has trailing zeros, then its reverse will not include them. 
For e.g., reverse of 10400 will be 401 instead of 00401.

Examples
                Example 1:
                Input:N = 12345
               
                Output:54321
                
                Explanation: The reverse of 12345 is 54321.
                                        
                Example 2:
                Input:N = 7789                
                
                Output: 9877
                
                Explanation: The reverse of number 7789 is 9877.				
*/

#include <iostream>
using namespace std;

class Solution {
public:
    // Function to reverse digits of a number
    int reverseNumber(int n) {
        // Variable to store reversed number
        int revNum = 0;

        // Loop until all digits are processed
        while (n > 0) {
            // Get the last digit
            int lastDigit = n % 10;

            // Append it to the reversed number
            revNum = revNum * 10 + lastDigit;

            // Remove the last digit from n
            n = n / 10;
        }

        // Return the reversed number
        return revNum;
    }
};

// Driver code
int main() {
    Solution obj;
    int num = 12345;
    cout << obj.reverseNumber(num) << endl;  // Output: 54321
    return 0;
}


// Time Complexity: O(log10N)
// Space Complexity: O(1)
