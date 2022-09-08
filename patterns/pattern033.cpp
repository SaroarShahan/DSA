#include<iostream>
using namespace std;

void printStar(int n) {
    while(n--)
        cout << "*";
}

void printSpace(int n) {
    while(n--)
        cout << " ";
}

int main() {
    int n;
    cin >> n;

    int space = 1;
    for(int row = n; row >= 1; row--) {
        printStar(row);
        printSpace(space);
        printStar(row);

        cout << endl;

        space += 2;
    }

    space = 2 * n - 1;

     for(int row = 1; row <= n; row++) {
        printStar(row);
        printSpace(space);
        printStar(row);

        cout << endl;

        space -= 2;
    }

    return 0;
}
