/*
Check if the given String is Palindrome or not

Problem Statement: "Given a string, check if the string is palindrome or not."  
A string is said to be palindrome if the reverse of the string is the same as the string.

Examples:

Example 1:
    Input: Str =  “ABCDCBA”
    Output: Palindrome
    Explanation: String when reversed is the same as string.

    Example 2:
    Input: Str = “TAKE U FORWARD”
    Output: Not Palindrome
    Explanation: String when reversed is not the same as string.
*/

#include <bits/stdc++.h>
using namespace std;

// Function to check if a string is a palindrome
bool isPalindrome(string s) {
    int left = 0, right = s.length() - 1;

    // Loop to check if the string is a palindrome
    while (left < right) {
        // Skip non-alphanumeric characters on the left side
        if (!isalnum(s[left])) 
            left++;
        // Skip non-alphanumeric characters on the right side
        else if (!isalnum(s[right])) 
            right--;
        // If characters are different, it's not a palindrome
        else if (tolower(s[left]) != tolower(s[right])) 
            return false;
        else {
            // Move towards the middle if characters are the same
            left++; 
            right--;
        }
    }
    return true;  // The string is a palindrome if the loop completes
}

int main() {
    string str = "ABCDCBA";  // String to check for palindrome
    bool ans = isPalindrome(str);  // Check if the string is a palindrome

    // Output the result
    if (ans == true) {
        cout << "Palindrome";
    } else {
        cout << "Not Palindrome";
    }

    return 0;
}


// Time Complexity: O(N)
// Space Complexity: O(1)

