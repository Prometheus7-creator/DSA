#include <iostream>

using namespace std;

int main() {

        int n;
        cout << "Enter n: ";
        cin >> n;

        for (int i = 0; i < n; i++) {
		for (int k = 0; k < i; k++) {
			cout << " ";
		}
		for (int j = i; j < n; j++){
			cout << "*";
		}	
		cout << endl;
        }

        return 0;
}
