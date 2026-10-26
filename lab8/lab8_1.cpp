#include <iostream>
using namespace std;

int main() {
    const int MAX_SIZE = 20;
    int A[MAX_SIZE], B[MAX_SIZE];
    int m;
    cin >> m;

    for (int i = 0; i < m; i++) {
        cin >> A[i];
    }

    for (int i = 0; i < m; i++) {
        cin >> B[i];
    }

    int innerProduct = 0;
    for (int i = 0; i < m; i++) {
        innerProduct += A[i] * B[i];
    }

    cout << innerProduct << endl;
    return 0;
}
