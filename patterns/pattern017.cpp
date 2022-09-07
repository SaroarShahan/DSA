#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;


    for(int row = 1; row <= n; row++) {
        char ch = 'A' + n - row;

        for(int col = 1; col <= row; col++) {
            cout << ch << " ";
            ch++;
        }

        cout << endl;
    }

    return 0;
}

