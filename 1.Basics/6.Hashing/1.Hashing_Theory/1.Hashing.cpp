/*
Step 1 - Pre-storing (i.e. insertion)
Step 2 - Fetching (i.e. retrieval)
*/

#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    //precompute:
    int hash[13] = {0};
    for (int i = 0; i < n; i++) {
        hash[arr[i]] += 1;
    }

    int q;
    cin >> q;
    while (q--) {
        int number;
        cin >> number;
        // fetching:
        cout << hash[number] << endl;
    }
    return 0;
}

/*
Input: 
5
1 3 2 1 3
5
1 4 2 3 12

Output: 
2
0
1
2
0
*/