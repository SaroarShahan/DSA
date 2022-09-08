#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for(int row = 1; row <=n; row++) {
        for(int col= 1; col <= row; col++) {
            cout << "*";
        }
        int sp = 2 * n - 2 * row;
        for(int space = 1; space <= sp; space++) {
            cout << " ";
        }

        for(int col2 = 1; col2 <= row; col2++) {
                cout << "*";
        }

        cout << endl;
    }

    for(int row = n - 1; row >= 1; row--) {
        for(int col= 1; col <= row; col++) {
            cout << "*";
        }
        int sp = 2 * n - 2 * row;
        for(int space = 1; space <= sp; space++) {
            cout << " ";
        }
        for(int col2 = 1; col2 <= row; col2++) {
                cout << "*";
        }

        cout << endl;
    }

    return 0;
}
