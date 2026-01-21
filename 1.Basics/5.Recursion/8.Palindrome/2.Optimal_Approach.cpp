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

Recursive Approach:
*/

#include<bits/stdc++.h>
using namespace std;

// Function to check if a string is a palindrome using recursion
bool palindrome(int i, string& s) {
    // Base Condition: If i exceeds half of the string, all the elements have been compared
    // and the string is a palindrome, return true.
    if (i >= s.length() / 2) return true;

    // If the start and end characters are not equal, it's not a palindrome.
    if (s[i] != s[s.length() - i - 1]) return false;

    // If both characters are the same, increment i and check start+1 and end-1.
    return palindrome(i + 1, s);
}

int main() {
    // Example string.
    string s = "madam";
    
    // Check if the string is a palindrome and output the result
    cout << palindrome(0, s);  // Output 1 if palindrome, 0 if not
    cout << endl;
    return 0;
}


// Time Complexity: O(N) 
// Space Complexity: O(1) 