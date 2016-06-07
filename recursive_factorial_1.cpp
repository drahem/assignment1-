//Sheet 2 Problem 1: Recursive Factorial
#include <iostream>
using namespace std;
int fact(int);

int main() {
    int n;
    do {
        cout << "Enter a nonnegative integer: ";
        cin >> n;
    } while (n < 0);
    cout << n << "! is " << fact(n) << endl;
    return 0;
}

int fact(int n) {
    if (n == 0) //Base Case
        return 1;
    else
        return n * fact(n - 1);
}
