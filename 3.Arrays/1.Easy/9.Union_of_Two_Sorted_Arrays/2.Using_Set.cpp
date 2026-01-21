/*
Union of Two Sorted Arrays

Problem Statement: Given two sorted arrays, arr1, and arr2 of size n and m. 
Find the union of two sorted arrays.

The union of two arrays can be defined as the common 
and distinct elements in the two arrays.

NOTE: Elements in the union should be in ascending order.

Examples

Input:n = 5,m = 5 arr1[] = {1,2,3,4,5}  arr2[] = {2,3,4,4,5}
Output: {1,2,3,4,5}
Explanation: Common Elements in arr1 and arr2  are:  2,3,4,5
Distnict Elements in arr1 are : 1
Distnict Elemennts in arr2 are : No distinct elements.
Union of arr1 and arr2 is {1,2,3,4,5}

Input:n = 10,m = 7,arr1[] = {1,2,3,4,5,6,7,8,9,10}arr2[] = {2,3,4,4,5,11,12}
Output: {1,2,3,4,5,6,7,8,9,10,11,12}
Explanation: Common Elements in arr1 and arr2  are:  2,3,4,5
Distnict Elements in arr1 are : 1,6,7,8,9,10
Distnict Elemennts in arr2 are : 11,12
Union of arr1 and arr2 is {1,2,3,4,5,6,7,8,9,10,11,12}

Solution 2: Using Set
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // Function to find the union of two arrays using set
    vector<int> findUnion(int arr1[], int arr2[], int n, int m) {
        // Create a set to store unique elements
        set<int> st;

        // Insert elements from first array
        for (int i = 0; i < n; i++) {
            st.insert(arr1[i]);
        }

        // Insert elements from second array
        for (int i = 0; i < m; i++) {
            st.insert(arr2[i]);
        }

        // Convert set to vector
        vector<int> unionArr(st.begin(), st.end());
        return unionArr;
    }
};

int main() {
    int arr1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int arr2[] = {2, 3, 4, 4, 5, 11, 12};
    int n = 10, m = 7;

    Solution obj;
    vector<int> result = obj.findUnion(arr1, arr2, n, m);

    cout << "Union of arr1 and arr2 is: ";
    for (int val : result) {
        cout << val << " ";
    }
    return 0;
}

// Time Compleixty : O( (m+n)log(m+n) )
// Space Complexity : O(m+n)