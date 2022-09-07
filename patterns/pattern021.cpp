#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for(int row = 1; row <= n; row++) {
        for(int col = n; col >= row; col--) {
            cout << "*";
        }

        cout << endl;

        for(int space = 1; space <= row; space++) {
            cout << " ";
        }
    }

    return 0;
}


