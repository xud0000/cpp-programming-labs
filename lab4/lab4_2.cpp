// EXERCISE 4-2: STELLAR MAGNITUDE AND BRIGHTNESS
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    double f1;
    double f2;
    cin >> f1 >> f2;

    double diff;
    diff = -2.5 * log10(f1 / f2);

    cout << fixed << setprecision(4);
    cout << "Magnitude Difference: " << diff << endl;

    return 0;
}