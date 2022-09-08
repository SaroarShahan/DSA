#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for(int row = 0; row < n; row++) {
        for(int space = 1; space < n - row; space++) {
            cout << " ";
        }
        for(int col = 0; col <= 2 * row; col++) {
            if(col == 0 || col == 2 * row || row == n - 1) {
            cout << "*";
            } else {
                cout << " ";
            }
        }

        cout << endl;
    }


    return 0;

}
