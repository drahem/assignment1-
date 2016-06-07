//Sheet 2 Problem 2: GCD b) Euclid Algorithm (division) i. recursion
#include <iostream>
#include <cmath>
using namespace std;
int gcd(int, int);

int main() {
    int m, n;
    do {
        cout << "Enter a nonnegative integer: ";
        cin >> m;
    } while (m < 0);
    do {
        cout << "Enter another nonnegative integer: ";
        cin >> n;
    } while (n < 0);
    cout << "GCD(" << m << "," << n << ") = " << gcd(m, n) << endl;
    return 0;
}

int gcd(int m, int n) {
    if (n == 0)
        return m;
    else
        return gcd(n, m % n);
}
