#include <iostream>

using namespace std;

int main() {

        int n;
        cout << "Enter n: ";
        cin >> n;
        for (int i = 0; i < n; i++) {
		for (int j = i; j < n-1; j++) cout << " ";
		int k = 2 * i + 1;
		while(k > 0) {
			cout << k--;
		}
		cout << endl;
        }

        return 0;
}
