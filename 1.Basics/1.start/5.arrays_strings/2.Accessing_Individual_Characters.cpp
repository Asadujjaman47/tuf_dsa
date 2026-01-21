// Accessing Individual Characters

#include <bits/stdc++.h>
using namespace std;

// Class containing the method to access characters
class Solution {
public:
    // Function to print each character of a string
    void accessCharacters(string s) {
        // Loop through each index
        for (int i = 0; i < s.length(); i++) {
            // Print the character at index i
            cout << s[i] << endl;
        }
    }
};

// Driver code
int main() {
    // Create object of Solution class
    Solution obj;
    // Input string
    string s = "Hello";
    // Call the function
    obj.accessCharacters(s);
    return 0;
}
