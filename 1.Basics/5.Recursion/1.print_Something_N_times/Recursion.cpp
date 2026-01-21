// Understand recursion by print something N times

#include <bits/stdc++.h>
using namespace std;
int cnt = 0;

void print() {

    // Base Condition
    if (cnt == 3)
        return;
    cout << cnt << endl;

    // Count Increment
    cnt++;
    print();
}

int main() {
    print();
    return 0;
}