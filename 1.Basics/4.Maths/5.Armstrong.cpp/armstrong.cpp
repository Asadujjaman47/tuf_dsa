/*
Check if a number is Armstrong Number or not

Problem Statement: Given an integer N, return true it is an Armstrong number 
otherwise return false.

An Amrstrong number is a number that is equal to the sum of its own digits 
each raised to the power of the number of digits.

Examples
                Example 1:
                Input:N = 153
               
                Output:True
                
                Explanation: 13+53+33 = 1 + 125 + 27 = 153
                                        
                Example 2:
                Input:N = 371                
                
                Output: True
                
                Explanation: 33+53+13 = 27 + 343 + 1 = 371
*/

#include <bits/stdc++.h>
using namespace std;

// Class to check Armstrong number
class ArmstrongChecker {
public:
    // Static method to check if a number is an Armstrong number
    static bool isArmstrong(int num) {
        int k = to_string(num).length(); // Get number of digits
        int sum = 0;
        int n = num;

        while (n > 0) {
            int ld = n % 10;            // Get last digit
            sum += pow(ld, k);          // Add ld^k to sum
            n /= 10;                    // Remove last digit
        }

        return sum == num; // Return true if sum equals original number
    }
};

int main() {
    int number = 153;

    // Use class method to check
    if (ArmstrongChecker::isArmstrong(number)) {
        cout << number << " is an Armstrong number." << endl;
    } else {
        cout << number << " is not an Armstrong number." << endl;
    }

    return 0;
}

// Time Complexity: O(log10N + 1) 
// Space Complexity: O(1) 