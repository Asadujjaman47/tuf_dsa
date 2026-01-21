// Check if a number is Armstrong Number or not

#include <bits/stdc++.h>
using namespace std;

bool armstrong(int n) {
    int digit_ct = floor(log10(n) + 1);

    int num = n;
    int sum = 0;
    while (num) {
        int rem = num % 10;
        sum += pow(rem, digit_ct);
        num /= 10;
    }
    return (n == sum);
}

int main() {
    int n;
    cin >> n;

    if (armstrong(n)) {
        cout << "Armstrong\n";
    }
    else {
        cout << "Not Armstrong\n";
    }
}