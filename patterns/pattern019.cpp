#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    // Approach 1
    /*for(int row = 1; row <= n; row++) {
        for(int space = n; space > row; space--) {
            cout << " ";
        }

        for(int col = 1; col <= row; col++) {
            cout  << "*";
        }

        cout << endl;
    }*/

    // Approach 2
    for(int row = 1; row <= n; row++) {
        for(int space = n - row; space >= 1; space--) {
            cout << " ";
        }

        for(int col = 1; col <= row; col++) {
            cout  << "*";
        }

        cout << endl;
    }

    return 0;
}

