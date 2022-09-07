#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    // first approach
    /*for(int row = 1; row <=n; row++) {

        for(int col = n; col >= 1; col--) {
            cout << col << " ";
        }
        cout << endl;
    }*/

    //second approach
    for(int row = 1; row <= n; row++) {
        for(int col = 1; col <= n; col++) {
            cout << n - col + 1;
        }

        cout << endl;
    }

    return 0;
}

