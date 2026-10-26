#include <iostream>
using namespace std;

void CreateInitialPlayfield(char playfield[10][10]);
bool isFull(const char line[10]);
void PrintPlayfield(const char playfield[10][10]);

int main() {
    char playfield[10][10];
    CreateInitialPlayfield(playfield);

    if (isFull(playfield[0])) {
        for (int i = 0; i < 10; ++i) {
            playfield[0][i] = '.';
        }
    }

    for (int i = 1; i < 10; ++i) {
        if (isFull(playfield[i])) {
            for (int j = i - 1; j >= 0; --j) {
                for (int k = 0; k < 10; ++k) {
                    playfield[j + 1][k] = playfield[j][k];
                }
            }
            for (int j = 0; j < 10; ++j) {
                playfield[0][j] = '.';
            }
        }
    }

    PrintPlayfield(playfield);
    return 0;
}

void CreateInitialPlayfield(char playfield[10][10]) {
    for (int row = 0; row < 10; ++row) {
        for (int col = 0; col < 10; ++col) {
            cin >> playfield[row][col];
        }
    }
}

bool isFull(const char line[10]) {
    for (int col = 0; col < 10; ++col) {
        if (line[col] != '#') {
            return false;
        }
    }
    return true;
}

void PrintPlayfield(const char playfield[10][10]) {
    for (int row = 0; row < 10; ++row) {
        for (int col = 0; col < 10; ++col) {
            cout << playfield[row][col];
        }
        cout << endl;
    }
}
