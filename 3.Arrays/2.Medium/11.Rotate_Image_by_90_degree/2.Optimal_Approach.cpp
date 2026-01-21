/*
Rotate Image by 90 degree

Problem Statement: Given an N * N 2D integer matrix, rotate the matrix by 90 degrees clockwise. 
The rotation must be done in place, meaning the input 2D matrix must be modified directly..

Examples
Input :matrix = [[1, 2, 3], [4, 5, 6], [7, 8, 9]]
            
Output :
matrix = [[7, 4, 1], [8, 5, 2], [9, 6, 3]]

Explanation :
First, we transpose the matrix: rows become columns. 
Then, we reverse each row to simulate 90° clockwise rotation. 
So element at (0,0) goes to (0,2), (0,1) goes to (1,2), and so on, achieving the rotated layout.


Input :
matrix = [[0, 1, 1, 2], [2, 0, 3, 1], [4, 5, 0, 5], [5, 6, 7, 0]]

Output :
matrix = [[5, 4, 2, 0], [6, 5, 0, 1], [7, 0, 3, 1], [0, 5, 1, 2]]

Explanation :
First, the matrix is transposed: rows become columns. 
Then, each row is reversed. This moves the last column to the first row, 
the second last column to the second row, and so on. 
The original position of each element is rotated 90° clockwise into its new location.
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // Function to rotate matrix 90 degrees clockwise in-place
    void rotateClockwise(vector<vector<int>>& matrix) {
        int n = matrix.size();

        // Step 1: Transpose the matrix
        for (int i = 0; i < n; ++i) {
            for (int j = i + 1; j < n; ++j) {
                // Swap element at (i, j) with (j, i) to transpose
                swap(matrix[i][j], matrix[j][i]);
            }
        }

        // Step 2: Reverse each row
        for (int i = 0; i < n; ++i) {
            // Reverse the current row to complete clockwise rotation
            reverse(matrix[i].begin(), matrix[i].end());
        }
    }
};

// Driver code
int main() {
    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    Solution obj;
    obj.rotateClockwise(matrix);

    // Print rotated matrix
    for (auto row : matrix) {
        for (int val : row) {
            cout << val << " ";
        }
        cout << endl;
    }

    return 0;
}

// Time Complexity: O(N²)
// Space Complexity: O(1)