#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;


    for(int row = 1; row <= n; row++) {
        for(int space = 1; space <= n - row; space++) {
            cout << " ";
        }
        for(int col = 1; col <= row; col++) {
            cout << col;
        }
        for(int last = row - 1; last >= 1; last--) {
            cout << last;
        }
        cout << endl;
    }

    return 0;
}