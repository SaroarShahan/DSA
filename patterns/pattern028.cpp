#include <iostream>
using namespace std;

int main() {
    int n, min;
    cin >> n;


    for(int row = 1; row <= n; row++) {
        for(int col = 1; col <= n; col++) {
           min = row < col ? row : col;
           cout << n - min + 1 << " ";
        }
        for(int col = n - 1; col >= 1; col--) {
            min = row < col ? row : col;
           cout << n - min + 1 << " ";
        }
        cout << endl;
    }

    for(int row = n - 1; row >= 1; row--) {
        for(int col = 1; col <= n; col++) {
           min = row < col ? row : col;
           cout << n - min + 1 << " ";
        }
        for(int col = n - 1; col >= 1; col--) {
            min = row < col ? row : col;
           cout << n - min + 1 << " ";
        }
        cout << endl;
    }


    return 0;
}
