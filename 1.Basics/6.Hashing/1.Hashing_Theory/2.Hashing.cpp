/*
Code if the string contains only lowercase:

Character Hashing
Case 1
*/

#include <bits/stdc++.h>
using namespace std;

int main() {

    string s;
    cin >> s;

    //precompute:
    int hash[26] = {0};
    for (int i = 0; i < s.size(); i++) {
        hash[s[i] - 'a']++;
    }

    int q;
    cin >> q;
    while (q--) {
        char c;
        cin >> c;
        // fetch:
        cout << hash[c - 'a'] << endl;
    }
    return 0;
}

/*
Input: 
abcdabehf
5
a
g
h
b
c

Output: 2
0
1
2
1
*/