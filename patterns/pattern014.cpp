#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;


    for(int row = 1; row <= n; row++) {
        for(int col = 1; col <= n; col++) {
            // Or you can store in a variable like: char result = 'A' + row + col - 2;
            // cout << result << " ";
            cout << char('A' + row + col - 2) << " ";
        }

        cout << endl;
    }



    return 0;
}



