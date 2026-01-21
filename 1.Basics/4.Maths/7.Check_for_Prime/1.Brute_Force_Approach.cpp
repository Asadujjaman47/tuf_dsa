/*
Check if a number is prime or not

Problem Statement: Given an integer N, check whether it is prime or not. 
A prime number is a number that is only divisible by 1 
and itself and the total number of divisors is 2.

Examples
                Example 1:
                Input:N = 2
               
                Output:True
                
                Explanation: 2 is a prime number because it has two divisors: 1 and 2 (the number itself).
                                        
                Example 2:
                Input:N =10                
                
                Output: False
                
                Explanation: 10 is not prime, it is a composite number because it has 4 divisors: 1, 2, 5 and 10.      

Brute Force Approach:
*/

#include <bits/stdc++.h>
using namespace std;

// Function to check if a given number is prime.
bool checkPrime(int n) {
    int cnt = 0;  // Initialize a counter variable to count the number of factors.

    // Loop through numbers from 1 to n.
    for (int i = 1; i <= n; i++) {
        // If n is divisible by i without any remainder.
        if (n % i == 0) {
            cnt++;  // Increment the counter.
        }
    }

    // If the number of factors is exactly 2 (1 and the number itself), it's prime.
    if (cnt == 2) {
        return true;
    }
    // If the number of factors is not 2, it's not prime.
    else {
        return false;
    }
}

int main() {
    int n = 1483;  // Example number
    bool isPrime = checkPrime(n);  // Function call to check if the number is prime

    if (isPrime) {
        cout << n << " is a prime number." << endl;
    } else {
        cout << n << " is not a prime number." << endl;
    }

    return 0;
}

// Time Complexity: O(N)
// Space Complexity : O(1)