//#include <bits/stdc++.h>
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream Fin("data.txt");
    int w, h;

    if (!Fin) {
        cout << "Fail to open file." << endl;
        return 1;
    }
    
    while (Fin >> w >> h) {
        int area = w * h;
        int perimeter = 2 * (w + h);

        cout << "Area: " << area << ", Perimeter: " << perimeter << endl;
    }

    Fin.close();
    return 0;
}