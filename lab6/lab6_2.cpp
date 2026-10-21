// TASK 6-2 : INFINITE LOOP
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int N;
    cin >> N;

    int numWin = 0, numLoss = 0;
    char currMatch;

    for (int i = 0; i < N; i++) {
        cin >> currMatch;
        if (currMatch == 'W') {
            numWin++;
        } else if (currMatch == 'L') {
            numLoss++;
        }
    }

    double winrate = (double)numWin / N * 100;

    cout << "Wins: " << numWin << endl;
    cout << "Losses: " << numLoss << endl;
    cout << fixed << setprecision(2);
    cout << "Win Rate: " << winrate << "%" << endl;

    return 0;
}
