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
    // Function to rotate the matrix 90 degrees clockwise using extra space
    vector<vector<int>> rotateClockwise(vector<vector<int>>& matrix) {
        // Get the size of the square matrix
        int n = matrix.size();

        // Create a new matrix of same size to store rotated result
        vector<vector<int>> rotated(n, vector<int>(n));

        // Traverse each element of original matrix
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                // Place the element at its new rotated position
                rotated[j][n - i - 1] = matrix[i][j];
            }
        }

        // Return the rotated matrix
        return rotated;
    }
};

// Driver code
int main() {
    vector<vector<int>> mat = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    Solution obj;
    vector<vector<int>> rotated = obj.rotateClockwise(mat);

    // Print the rotated matrix
    for (auto row : rotated) {
        for (int val : row) cout << val << " ";
        cout << endl;
    }

    return 0;
}

// Time Complexity: O(N²)
// Space Complexity: O(N²)