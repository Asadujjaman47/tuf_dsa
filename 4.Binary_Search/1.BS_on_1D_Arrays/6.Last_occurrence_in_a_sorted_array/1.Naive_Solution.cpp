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


Solution 1: Naive solution 
*/

#include <bits/stdc++.h>
using namespace std;

// find last index of key by scanning from right
int solve(int n, int key, vector<int>& v) {
  // initialize result as not found
  int res = -1;
  // scan from the end toward the start
  for (int i = n - 1; i >= 0; i--) {
    // update and stop when match found
    if (v[i] == key) {
      res = i;
      break;
    }
  }
  // return index or -1
  return res;
}

// program entry
int main() {
  // set size
  int n = 7;
  // set key to search
  int key = 13;
  // define input array
  vector<int> v = {3, 4, 13, 13, 13, 20, 40};
  // print last occurrence index (or -1)
  cout << solve(n, key, v) << "\n";
  // exit
  return 0;
}

// Time Complexity: O(N) 
// Space Complexity: O(1)