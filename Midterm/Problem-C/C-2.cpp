/*
C-2 (10%)
Write a C++ program that reads multiple sets of integers from data-c2.txt and sorts each
set in ascending order using Insertion Sort.
Insertion Sort builds a sorted portion of the array one element at a time. Starting from
the second element, compare it with the elements before it and swap adjacent
elements if they are in the wrong order. Repeat this process until the element reaches
its correct position.
Complete the provided C++ program.
You must use the previous shouldSwap() function to determine whether two adjacent
elements should be swapped.
Input
The input is read from data-c2.txt.
✔ The first line contains an integer n, representing the number of test cases.
For each test case:
✔ Read an integer m, representing the number of elements.
✔ Read m integers into an array.
Output
✔ For each test case, print the sorted integers in ascending order on a single line,
separated by spaces.
Note
✔ 1 ≤ n ≤ 20
✔ 1 ≤ m ≤ 100
✔ −1000 ≤ arr[i] ≤ 1000

Sample Input 1 (data.txt)
3
5
5 2 4 1 3
4
-2 0 -2 7
6
9 3 9 1 5 2
Sample Output 1
1 2 3 4 5
-2 -2 0 7
1 2 3 5 9 9

Sample Input 2
5
Sample Output 2
8
*/

#include <iostream>
#include <fstream>
using namespace std;

bool shouldSwap(int left, int right) {
	return left > right;
}

int main() {
    ifstream fin("data-c2.txt");
    int n, m;
    int arr[100];
    fin >> n;
    for (int t = 0; t < n; t++) {
        fin >> m;
        // Read array elements
        for (int k = 0; k < m; k++) {
        fin >> arr[k];
        }
        // Insertion Sort
        for (int i = 1; i < m; i++) {
            for (int j = i; j > 0; j--) {
                if (shouldSwap(arr[j - 1], arr[j])) {
                    int temp = arr[j];
                    arr[j] = arr[j - 1];
                    arr[j - 1] = temp;
                }
                else {
                    break;
                }
            }
        }
        // Print the sorted array
        for (int k = 0; k < m; k++) {
            if (k > 0) cout << " ";
            cout << arr[k];
        }
        cout << endl;
    }
    fin.close();
    return 0;
}