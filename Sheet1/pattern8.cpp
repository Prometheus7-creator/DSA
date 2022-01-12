#include <iostream>

using namespace std;

int main() {

        int n;
        cout << "Enter n: ";
        cin >> n;
	int k = 1;
        for (int i = 0; i < n; i++) {
		for (int l = 0; l < n-i-1; l++){
			cout << " ";
		}
		for (int j = 0; j <= i; j++) {
			if (j == 0 || j == i) cout << k;
			else cout << " ";
			cout << " ";
		}
		k++;
		cout << endl;
        }
	k = n-1;
	for (int i = 0; i < n-1; i++) {
		for (int j = 0; j <= i; j++) cout << " ";
		for (int l = 0; l < n-i-1; l++) {
			if (l == 0 || l == n-i-2) cout << k;
			else cout << " ";
			cout << " ";
		}
		cout << endl;
		k--;
	}
        return 0;
}
