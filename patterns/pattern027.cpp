#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;


    for(int row = 1; row <= n; row++) {
        for(int col = 1; col <= n - row + 1; col++) {
            cout << col;
        }
        for(int space = row - 1; space >= 1; space--) {
            cout << "*";
        }

        for(int space = row - 1; space >= 1; space--) {
            cout << "*";
        }
        for(int i = n - row + 1; i >= 1; i--) {
            cout << i;
        }

        cout << endl;
    }

    return 0;
}
