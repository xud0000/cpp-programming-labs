// TASK 6-1 : FOR VS. WHILE VS. DO-WHILE
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;

    int middle = (n - 1) / 2;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int distance = abs(i - middle) + abs(j - middle);
            cout << distance;
            if (j != n - 1) {
                cout << " ";
            }
        }
        cout << '\n';
    }

    return 0;
}
