#include <iostream>

using namespace std;

int main() {

        int n;
        cout << "Enter n: ";
        cin >> n;

        for (int i = 0; i < n+1; i++) {
		for (int j = n; j > n-i-1; j--) {
			cout << j;
		}
		cout << endl;
        }

	for (int i = 0; i < n; i++) {
		for (int j = n; j > i; j--) {
			cout << j;
		}
		cout << endl;
	}

        return 0;
}
