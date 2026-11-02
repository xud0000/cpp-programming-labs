/*
B-1 (10%)
✔ Given an odd positive integer n, generate an n times n grid.
✔ For each cell in the grid, calculate its Euclidean distance from the center cell and
output the distance value of each cell.
✔ The Euclidean distance between two cells (𝑐1) and (𝑐2) is defined as:
𝐷𝐸𝑢𝑐𝑙𝑖𝑑𝑒𝑎𝑛 = √(𝑟1− 𝑟2)2 + (𝑐1− 𝑐2)2
✔ where 𝑟𝑖 represents the row number of cell 𝑖, and 𝑐𝑖 represents the column number
of cell 𝑖.
Input
✔ The input consists of one odd positive integer n, representing the size of the
square grid.
⮚ 1 ≤ 𝑛 ≤ 9
Output
✔ Output an 𝑛 × 𝑛 grid, where each value represents the Euclidean distance from the
corresponding cell to the center cell.
✔ Display the values with exactly 2 digits after the decimal point.
✔ The values in each row should be separated by a single space, and each row
should be printed on a new line.
✔ There is no space at the end of each line.
Sample Input 1
3
Sample Output 1
1.41 1.00 1.41
1.00 0.00 1.00
1.41 1.00 1.41
Sample Explanation 1
For 𝑛 = 3, the center cell is (2), using 1-based indexing.
The Euclidean distance of each cell is calculated using:
√(𝑟 − 2)2 + (𝑐 − 2)2
Therefore:
✔ The center cell has distance (0.00).
✔ The horizontally and vertically adjacent cells have distance (1.00).
✔ The four corner cells have distance (√2 ≈1.41).
Sample Input 2
5
Sample Output 2
2.83 2.24 2.00 2.24 2.83
2.24 1.41 1.00 1.41 2.24
2.00 1.00 0.00 1.00 2.00
2.24 1.41 1.00 1.41 2.24
2.83 2.24 2.00 2.24 2.83
*/

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main() {
// define and read n
int n;
cin >> n;
// calculate the coordinate of center cell
// 0-based indices are used here: 0, 1, ..., n - 1
int middle = (n - 1) / 2;
// output the Euclidean distance of each cell in a nested loop
cout << fixed << setprecision(2);
for (int i = 0; i < n; ++i) {
for (int j = 0; j < n; ++j) {
double distance = sqrt((i - middle) * (i - middle) +
					   (j - middle) * (j - middle));
cout << distance;
if (j != n - 1)
cout << " ";
}
cout << endl;
}
return 0;
}