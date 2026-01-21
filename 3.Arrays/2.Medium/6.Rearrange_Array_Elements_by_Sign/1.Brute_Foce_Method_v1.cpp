/**
Rearrange Array Elements by Sign

Problem Statement: There’s an array ‘A’ of size ‘N’ with an equal number of positive 
and negative elements. 
Without altering the relative order of positive and negative elements, 
you must return an array of alternately positive and negative values.

Examples
Example 1:
Input:
arr[] = {1,2,-4,-5}, N = 4
Output:
1 -4 2 -5
Explanation: 
Positive elements = 1,2
Negative elements = -4,-5
To maintain relative ordering, 1 must occur before 2, and -4 must occur before -5.

Example 2:
Input:
arr[] = {1,2,-3,-1,-2,-3}, N = 6
Output:
1 -3 2 -1 3 -2
Explanation: 
Positive elements = 1,2,3
Negative elements = -3,-1,-2
To maintain relative ordering, 1 must occur before 2, and 2 must occur before 3.
Also, -3 should come before -1, and -1 should come before -2.

// Brute Force Method:
 */

#include <bits/stdc++.h>
using namespace std;

// Class to encapsulate array operations
class ArrayManipulator {
public:
    // Function to rearrange elements so that positives and negatives alternate
    vector<int> RearrangeBySign(vector<int>& A, int n) {
        vector<int> pos; // Vector to store positive numbers
        vector<int> neg; // Vector to store negative numbers

        // Step 1: Separate positives and negatives
        for (int i = 0; i < n; i++) {
            if (A[i] > 0)
                pos.push_back(A[i]); // Add positive to pos[]
            else
                neg.push_back(A[i]); // Add negative to neg[]
        }

        // Step 2: Place positives at even indices and negatives at odd indices
        for (int i = 0; i < n / 2; i++) {
            A[2 * i] = pos[i];      // Even index → positive
            A[2 * i + 1] = neg[i];  // Odd index → negative
        }

        return A; // Return the rearranged array
    }
};

// Driver code
int main() {
    int n = 4;
    vector<int> A{1, 2, -4, -5};

    // Create object of the class
    ArrayManipulator obj;

    // Call the function and get result
    vector<int> ans = obj.RearrangeBySign(A, n);

    // Print the rearranged array
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }

    return 0;
}

// Time Complexity: O(N+N/2) 
// Space Complexity:  O(N/2 + N/2) = O(N) 