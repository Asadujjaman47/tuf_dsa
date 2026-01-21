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

Using Formula:
*/


#include <bits/stdc++.h>
using namespace std;

void solve(int n) {
    int sum = n * (n + 1) / 2;
    cout << "The sum of the first " << n << " numbers is: " << sum << "\n";
}

int main() {
    solve(5);
    solve(6);
}

// Time Complexity: O(1)
// Space Complexity: O(1)
