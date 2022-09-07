#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for(int row = 1; row <= n; row++) {
        for(int space = 1; space <= row - 1; space++) {
            cout << " ";
        }
        for(int col = n; col >= row; col--) {
            cout << row;
        }

        cout << endl;
    }

    return 0;
}



