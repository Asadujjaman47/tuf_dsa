/*
Print Name N times using Recursion

Problem Description: Given an integer N, 
write a program to print your name N times.

Examples
    Input: N = 3
    Output: Asad Asad Asad 
    Explanation: Name is printed 3 times.

    Input: N = 1
    Output: Asad 
    Explanation: Name is printed once.
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // Recursive function to print name count times
    void printName(string name, int count, int N) {
        // Base case: if count equals N, stop recursion
        if (count == N)
            return;

        // Print the name
        cout << name << "\n";

        // Recursive call with incremented count
        printName(name, count + 1, N);
    }
};

int main() {
    Solution sol;
    int N = 5;
    string name = "Asad";

    sol.printName(name, 0, N);

    return 0;
}

// Time Complexity: O(N)
// Space Complexity: O(N)