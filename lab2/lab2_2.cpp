//EXERCISE 2-2: VARIANCE

#include <iostream>
using namespace std;

int main() {
    // Define variables, we will change scores here (0 ~ 100)
    int math = 80;
    int physics = 90;
    int chemistry = 70;
    double average = (math + physics + chemistry) / 3.0;

    // Compute the average and variance
    double diff_m = math - average;
    double diff_p = physics - average;
    double diff_c = chemistry - average;
    double variance = (diff_m * diff_m + diff_p * diff_p + diff_c * diff_c) / 3.0;

    // Display
    cout << "Math: " << math << endl;
    cout << "Physics: " << physics << endl;
    cout << "Chemistry: " << chemistry << endl;
    cout << "Average: " << average << endl;
    cout << "Variance: " << variance << endl;

    return 0;
}