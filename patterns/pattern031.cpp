#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int sp = 2 * (n - 1);
    for(int row = 1; row <= n; row++) {
        for(int col= 1; col <= row; col++) {
            cout << "*";
        }

        for(int space = 1; space <= sp; space++) {
            cout << " ";
        }

        for(int col = 1; col <= row; col++) {
            cout << "*";
        }

        cout << endl;

        sp -= 2;
    }

    sp = 2;
     for(int row = n -1; row >= 1; row--) {
        for(int col= 1; col <= row; col++) {
            cout << "*";
        }

        for(int space = 1; space <= sp; space++) {
            cout << " ";
        }

        for(int col = 1; col <= row; col++) {
            cout << "*";
        }

        cout << endl;

        sp += 2;
    }



    return 0;
}
