#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    // Approach One
    /*int ch = 'A';

    for(int row = 1; row <= n; row++) {

        for(int col = 1; col <= n; col++) {
            cout << char(ch) << " ";

        }
        ch++;

        cout << endl;
    } */

    for(int row = 1; row <= n; row++) {
        for(int col = 1; col <= n; col++) {
            // Or you can store in a varialble like: char result = 'A' + row - 1;
            cout << char('A' + row -1) << " ";
        }

        cout << endl;
    }

    return 0;
}
