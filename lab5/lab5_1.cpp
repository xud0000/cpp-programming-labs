// EXERCISE 5-1: EQUATION CHECKER

#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream fin("data.txt");

    int a, b, c;
    char op, equal_sign;

    for (int i = 0; i < 5; i++) {
        fin >> a >> op >> b >> equal_sign >> c;

        bool correct = false;

        switch (op) {
            case '+':
                correct = (a + b == c);
                break;

            case '-':
                correct = (a - b == c);
                break;

            case '*':
                correct = (a * b == c);
                break;

            case '/':
                correct = (a % b == 0 && a / b == c);
                break;
        }

        if (correct) {
            cout << "yes" << endl;
        } else {
            cout << "no" << endl;
        }
    }

    fin.close();

    return 0;
}