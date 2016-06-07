//Sheet 3 Problem 4: Mean, Median, Mode, and Range

#include <iostream>

#include <cmath>

#include <iomanip>

using namespace std;

void readArray(int x[], int n);

void printSeparator(string);

void printArray(int x[], int n);

void sort(int[], int);

void swap(int&, int&);

double mean(int[], int);

double median(int[], int);

int mode(int[], int);

int range(int[], int);

int max(int[], int);

int min(int[], int);


int main() {
    
const int N = 5;
    int x[N];
    readArray(x, N);
    printSeparator("Original Array");
    printArray(x, N);
    sort(x, N);
    printSeparator("Sorted Array");
    printArray(x, N);
    printSeparator("Array Mean");
    cout << setw(9) << setiosflags(ios::fixed | ios::showpoint) << setprecision(2) << mean(x, N) << endl;
    printSeparator("Array Median");
    cout << setw(9) << setiosflags(ios::fixed | ios::showpoint) << setprecision(2) << median(x, N) << endl;
    printSeparator("Array Range");
    cout << setw(6) << range(x, N) << endl;
    printSeparator("Array Mode");
    cout << setw(6) << mode(x, N) << endl;
    return 0;
}

void readArray(int x[], int n) {
    for (int i = 0; i < n; i++) {
        cout << "Enter an integer [0,99]: ";
        cin >> x[i];
    }
}

void printSeparator(string s) {
    cout << "\n---------------------------\n";
    cout << s << ":\n";
}

void printArray(int x[], int n) {
    for (int i = 0; i < n; i++) {
        cout << setw(6) << x[i] << "\t";
        for (int j = 0; j < x[i]; j++)
            cout << "*";
        cout << endl;
    }
}

void sort(int x[], int n) {
    //Selection Sort
    int i, j;
    int iMin;
    for (j = 0; j < n - 1; j++) {
        iMin = j;
        for (i = j + 1; i < n; i++) {
            if (x[i] < x[iMin]) {
                iMin = i;
            }
        }
        if (iMin != j) {
            swap(x[j], x[iMin]);
        }
    }
}

void swap(int &a, int &b) {
    int temp;
    temp = a;
    a = b;
    b = temp;
}

double mean(int x[], int n) {
    double sum = 0;
    for (int i = 0; i < n; i++)
        sum += x[i];
    return sum / n;
}

double median(int x[], int n) {
    if (n % 2 == 0)
        return (x[n / 2] + x[n / 2 - 1]) / 2.0;
    else
        return x[(n - 1) / 2];
}

int mode(int x[], int n) {
    int freq[100];
    for (int i = 0; i < 100; i++)
        freq[i] = 0;
    for (int i = 0; i < n; i++)
        freq[x[i]]++;
    int maxF = freq[0];
    int freqX = 0;
    for (int i = 1; i < 100; i++)
        if (maxF < freq[i]) {
            maxF = freq[i];
            freqX = i;
        }
    return freqX;
}

int range(int x[], int n) {
    return max(x, n) - min(x, n);
}

int max(int x[], int n) {
    int maxX = x[0];
    for (int i = 1; i < n; i++)
        if (maxX < x[i])
            maxX = x[i];
    return maxX;
}

int min(int x[], int n) {
    int minX = x[0];
    for (int i = 1; i < n; i++)
        if (minX > x[i])
            minX = x[i];
    return minX;
}
