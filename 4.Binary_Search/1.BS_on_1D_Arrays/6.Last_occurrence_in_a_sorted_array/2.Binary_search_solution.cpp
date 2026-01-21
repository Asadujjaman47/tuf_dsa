/*
Last occurrence in a sorted array

Given a sorted array of N integers, 
write a program to find the index of the last occurrence of the target key. 
If the target is not found then return -1.

Note: Consider 0 based indexing

Examples:

Example 1:
Input: N = 7, target=13, array[] = {3,4,13,13,13,20,40}
Output: 4
Explanation: As the target value is 13 , 
it appears for the first time at index number 2.

Example 2:
Input: N = 7, target=60, array[] = {3,4,13,13,13,20,40}
Output: -1
Explanation: Target value 60 is not present in the array


Solution 2: Binary search solution (optimised) 
*/

#include <bits/stdc++.h>
using namespace std;

// find last index of key using binary search
int solve(int n, int key, vector<int>& v) {
  // initialize search bounds and result
  int start = 0;
  int end = n - 1;
  int res = -1;

  // binary search loop
  while (start <= end) {
    // compute mid safely
    int mid = start + (end - start) / 2;
    // when match found, store index and move right
    if (v[mid] == key) {
      res = mid;
      start = mid + 1;
    }
    // when key is smaller, move left
    else if (key < v[mid]) {
      end = mid - 1;
    }
    // otherwise move right
    else {
      start = mid + 1;
    }
  }
  // return last occurrence or -1
  return res;
}

// program entry
int main() {
  // define input size and key
  int n = 7;
  int key = 13;
  // define sorted array
  vector<int> v = {3, 4, 13, 13, 13, 20, 40};
  // print last occurrence index (or -1)
  cout << solve(n, key, v) << "\n";
  // exit
  return 0;
}

// Time Complexity: O(logN) 
// Space Complexity: O(1)