/*
C-1 (10%)
Write a C++ program that reads five pairs of integers from a file named data.txt.
Define a function named shouldSwap() that takes two integers, left and right, as
parameters and returns a Boolean value.
The function should:
● Return true if left > right.
● Return false otherwise.
For each pair of integers, you must output “true” or “false” using cout
Note
Please use the following function declaration: bool shouldSwap(int left, int right);
For each pair of integers, call shouldSwap() and print the result.
Input
The input is read from data.txt.
✔ The file contains exactly 5 lines.
✔ Each line contains two integers, left and right, separated by a space.
Output
✔ Print true or false for each pair on a separate line, using lowercase letters.
Sample Input (data.txt)
8 3
2 6
5 5
-1 -4
0 10
Sample Output 1
true
false
false
true
false
*/
#include <iostream>
#include <fstream>
using namespace std;
bool shouldSwap(int left, int right) {
	return left > right;
}

int main() {
ifstream fin("data-c1.txt");
int left, right;
for (int i = 0; i < 5; i++) {
    fin >> left >> right;
    if (shouldSwap(left, right)) {
        cout << "true" << endl;
    }
    else {
        cout << "false" << endl;
    }
}

fin.close();
return 0;
}