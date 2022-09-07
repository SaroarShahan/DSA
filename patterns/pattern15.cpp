#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for(int row = 1; row <= n; row++) {
        for(int col = 1; col <= row; col++) {
            char ch = 'A' + row - 1;
            cout << ch << " ";
        }

        cout << endl;
    }

    return 0;
}
