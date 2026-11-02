/*
A-1 (10%)
The following C++ program contains several logical errors.
Your task is to identify and correct the errors so that the program
produces the expected output shown below.
Note:
⮚ Correct the logical errors in the program.
⮚ Do not change the function names, the parameters or return types.
⮚ Do not modify the main() function.
*/
#include <iostream>
using namespace std;

int getValueByOption(int option)
{
    if (option == 2)
        return 250;
    else
        return 300;
}

int calculateProduct(int a, int b)
{
    return a * b;
}

int adjustValue(int value)
{
    if (value >= 1000)
        return value * 0.9;
    return value;
}

int calculateDifference(int a, int b)
{
    return a - b;
}


int main()
{
    int option;
    int a, b;
    int value;
    int x, y;
    cin >> option;
    cin >> a >> b;
    cin >> value;
    cin >> x >> y;
    cout << getValueByOption(option) << endl;
    cout << calculateProduct(a, b) << endl;
    cout << adjustValue(value) << endl;
    cout << calculateDifference(x, y) << endl;
    return 0;
}