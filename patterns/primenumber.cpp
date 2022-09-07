#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int num = 2;

    while(num < n) {
        if(n % num == 0) {
            cout << "Not prime" << endl;
        }

        num = num + 1;
    }

    cout << "Prime" << endl;

    return 0;
}
