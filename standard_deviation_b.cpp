//Sheet 2 Problem 3: Standard Deviation b)
#include <iostream>
#include <cmath>
using namespace std;
double sigma(double[], int);

int main() {
    const int N = 10;
    double x[N];
    for (int i = 0; i < N; i++) {
        cout << "Enter a real number: ";
        cin >> x[i];
    }
    cout << "sigma = " << sigma(x, N) << endl;
    return 0;
}

double sigma(double x[], int n) {
    double sum1 = 0, sum2 = 0;
    for (int i = 0; i < n; i++) {
        sum1 += x[i];
        sum2 += x[i] * x[i];
    }
    sum1 /= n;
    sum2 /= n;
    return sqrt(sum2 - sum1 * sum1);
}
