//Sheet 3 Problem 3: Random Stars II
#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;
const int W = 5;
void rndStars(char sky[W][W], float);

int main() {
    char sky[W][W];
    float p;
    do {
        cout << "Enter the stars ratio: ";
        cin >> p;
    } while (p < 0 || p > 1);
    rndStars(sky, p);
    for (int i = 0; i < W; i++) {
        for (int j = 0; j < W; j++)
            cout << sky[i][j];
        cout << endl;
    }
    return 0;
}

void rndStars(char sky[W][W], float p) {
    for (int i = 0; i < W; i++)
        for (int j = 0; j < W; j++)
            sky[i][j] = ' ';
    for (int i = 0; i < p * W * W; i++) {
        int col, row;
        do {
            col = rand() % W;
            row = rand() % W;
        } while (sky[row][col] == '*');
        sky[row][col] = '*';
    }
}
