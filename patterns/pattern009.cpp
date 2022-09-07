#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    // Approach 1
    /*for(int row = 1; row <= n; row++) {
        int count = row;

        for(int col = 1; col <= row; col++) {
            cout << count << " ";

            count++;
        }

        cout << endl;
    } */

    // Approach 2
    for(int row = 1; row <= n; row++) {
        for(int col = 1; col <= row; col++) {
            cout << row + col - 1 << " ";
        }

        cout << endl;
    }

    return 0;
}
