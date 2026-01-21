// Print all Divisors of a given Number

#include <bits/stdc++.h>
using namespace std;

int sumOfAllDivisors(int n) {
	// Write your code here.
	int sum = 0;
	for (int i = 1; i <= n; i++) {
		sum += i * (n / i);
	}
	return sum;
}

int main() {
	int n;
	cin >> n;
	cout << sumOfAllDivisors(n);
	return 0;
}