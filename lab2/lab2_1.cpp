//EXERCISE 2-1: 2×2 MATRIX INVERSE

#include <iostream>
using namespace std;

int main() {
    // Define variables, we will change matrix elements here (-10 ~ 10)
    int a = 4;
    int b = 7;
    int c = 2;
    int d = 6;

    // Compute the determinant
    double det = static_cast<double>(a * d - b * c);

    // Compute the inverse matrix
    double inv_a = d / det;
    double inv_b = -b / det;
    double inv_c = -c / det;
    double inv_d = a / det;

    // Display
    cout << "Original Matrix:" << endl;
    cout << a << " " << b << endl;
    cout << c << " " << d << endl;

    // Display
    cout << "Inverse Matrix:" << endl;
    cout << inv_a << " " << inv_b << endl;
    cout << inv_c << " " << inv_d << endl;

    return 0;
}
