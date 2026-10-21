// Exercise 7-2 : Counting Poker Hands
#include <iostream>
#include <fstream>
using namespace std;

int comb(int n, int k) {
    if (k == 0 || k == n) {
        return 1;
    }

    return comb(n - 1, k - 1) + comb(n - 1, k);
}

int main() {
    ifstream file("input3.txt");
    if (!file) return 1;

    int n, k;

    while (file >> n >> k) {
        cout << comb(n, k) << endl;
    }

    return 0;
}
