// Exercise 7-1 : Texas Poker
#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
using namespace std;

int card_num() {
    return rand() % 13 + 1;
}

string card_flower() {
    string suits[4] = {"spade", "heart", "diamond", "club"};
    return suits[rand() % 4];
}

void dealer(int round) {
    int count[4] = {2, 3, 1, 1};

    for (int i = 0; i < count[round]; i++) {
        cout << card_flower() << " " << card_num() << endl;
    }
}

int pot_num(string in, int pot_now) {
    if (in == "raise") {
        return pot_now * 2;
    }
    if (in == "fold") {
        return 0;
    }
    return pot_now;
}

void play(string filename) {
    ifstream file(filename);
    if (!file) return;

    srand(0);

    int pot = 10;
    string in;

    for (int round = 0; round < 4; round++) {
        if (!(file >> in)) break;

        dealer(round);
        pot = pot_num(in, pot);

        if (in == "fold") {
            cout << "you fold" << endl;
            break;
        }

        cout << "pot: " << pot << endl;
    }

    cout << "total pot: " << pot << endl;
}

int main() {
    play("input1.txt");
    play("input2.txt");
    return 0;
}
