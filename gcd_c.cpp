//Sheet 2 Problem 2: GCD c) Euclid Algorithm (subtraction)
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
    if (m > n)
        return gcd(m - n, n);
    else if (m < n)
        return gcd(m, n - m);
    else
        return m;
}
