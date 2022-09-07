#include<iostream>
using namespace std;

int main() {
    int rows, cols;

    cout << "Number of rows: ";
    cin >> rows;
    cout << "Number of cols: ";
    cin >> cols;

    for(int row = 1; row <= rows; row++) {
        for(int col = 1; col <= cols; col++) {
            if(row == 1 || row == rows || col == 1 || col == cols) {
                cout << "*";
            } else {
                cout << " ";
            }
        }

        cout << endl;
    }

    return 0;
}
