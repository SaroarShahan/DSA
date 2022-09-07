#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    /* Approach 1
    for(int row = 1; row <=n; row++) {
        for(int col = row; col >= 1; col--) {
            cout << col << " ";
        }

        cout << endl;
    }
    */

    for(int row = 1; row <=n; row++) {
        for(int col = 1; col <= row; col++) {
            cout << row - col + 1 << " ";
        }

        cout << endl;
    }

    return 0;
}
