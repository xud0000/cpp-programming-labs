// EXERCISE 5-2: INFO PRINTER

#include <iostream>
#include <string>
using namespace std;

int main() {
    string power;
    cin >> power;

    if (power == "off") {
        cout << "Standby" << endl;
    }
    else if (power == "on") {
        int mode;
        cin >> mode;

        switch (mode) {
            case 1:
                cout << "你的名字" << endl;
                break;

            case 2:
                cout << "通訊系" << endl;
                break;

            case 3:
                cout << "0156C0676767" << endl;
                break;
        }
    }

    return 0;
}