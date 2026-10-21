// EXERCISE 4-1: ACTIVATION FUNCTION
#include <iostream>
#include <cmath>
#include <algorithm>
#include <iomanip>
using namespace std;

int main() {
    double x;
    cin >> x;

    double relu = max(0.0, x);
    double sigmoid = 1.0 / (1.0 + exp(-x));
    double softsign = x / (1.0 + fabs(x));

    cout << fixed << setprecision(4);
    cout << "ReLU: " << relu << endl;
    cout << "Sigmoid: " << sigmoid << endl;
    cout << "Softsign: " << softsign << endl;

    return 0;
}