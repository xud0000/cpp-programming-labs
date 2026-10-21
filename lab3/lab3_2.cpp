//#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
    string StudentName; 
    char class_no;
    int year;
    double gpa;

    getline(cin, StudentName);
    cin >> class_no;
    cin >> year;
    cin >> gpa;

    cout << left << setw(20) << "Name"
         << right << setw(6) << "Class"
         << right << setw(10) << "Year"
         << right << setw(12) << "GPA" << endl;

    cout << left << setw(20) << StudentName
         << right << setw(6) << class_no
         << right << setw(10) << year
         << right << setw(12) << fixed << setprecision(2) << gpa << endl;

    return 0;
}
