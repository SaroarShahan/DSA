#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;

	for(int row = 1; row <= n; row++) {
		for(int col = 1; col <= n; col++) {
            if(row == 1 || row == n || row == n - col + 1)
                cout << "*";
            else
                cout << " ";
		}

		cout << endl;
	}

	return 0;
}
