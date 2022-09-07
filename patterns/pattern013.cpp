#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int ch = 'A';

    for(int row = 1; row <= n; row++) {

        for(int col = 1; col <= n; col++) {
            cout << char(ch) << " ";

            ch++;
        }

        cout << endl;
    }



    return 0;
}


