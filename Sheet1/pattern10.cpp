#include <iostream>

using namespace std;

int main() {

        int n;
        cout << "Enter n: ";
        cin >> n;
	int k = 1;
        for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (i == j || i == n-j-1) cout << k;
			else cout << " ";
		}
		cout << endl;
		k++;
        }

        return 0;
}
