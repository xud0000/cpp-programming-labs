/*
B-2 (10%)
✔ In this problem, you are given a C++ program that contains 5 compilation errors.
Your task is to identify and fix these errors so that the program compiles
successfully and produces the expected output.
✔ All errors are compilation errors. There are no logical or functional errors in the
provided code. You only need to fix the compilation errors without changing
the intended functionality of the program.
✔ The program performs Caesar cipher decryption by shifting each English letter
backward by a fixed number of positions in the alphabet. Uppercase and lowercase
letters are preserved, while spaces, digits, and punctuation remain unchanged. The
shifting wraps around the alphabet when necessary.
⮚ For example, with a shift value of 3, D becomes A, A becomes X, and d
becomes a.
Input
✔ The first line contains a sentence 𝑠, which may include uppercase and lowercase
English letters, spaces, digits, and punctuation.
⮚ 1 ≤ |s| ≤ 100
✔ The second line contains an integer 𝑘, representing the shift value.
⮚ 0 ≤ |k| ≤ 25
Output
✔ Output the decrypted sentence, preserving the original letter cases and all non-
alphabetic characters.

Output
✔ Output the decrypted sentence, preserving the original letter cases and all non-
alphabetic characters.
Sample Input 1
Plgwhup lv vr HC!
3
Sample Output 1
Midterm is so EZ!
Sample Input 2
N qtaj KHU fsi H++
5
Sample Output 2
I love FCP and C++
Sample Input 3
Kv'u OaIQ!!!!!
2
Sample Output 3
It's MyGO!!!!!
*/

#include <iostream>
#include <string>
using namespace std;


char decrypt(char c, int shift) {
    string upper = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string lower = "abcdefghijklmnopqrstuvwxyz";
    for (int i = 0; i < 26; i++) {
        if (c == upper[i]) {
            return upper[(i - shift + 26) % 26];
        }
        if (c == lower[i]) {
            return lower[(i - shift + 26) % 26];
        }
    }
    return c;
}
int main() {
    string s;
    int shift;
    getline(cin, s);
    cin >> shift;
    for (int i = 0; i < s.length(); i++) {
        s[i] = decrypt(s[i], shift);
    }
    cout << s << endl;
    return 0;
}