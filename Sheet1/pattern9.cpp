#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;
    if (n > 26 || n < 1) {
        cout << "INVALID VALUE (choose between 1 to 26)" << endl;
        exit(0);
    }
    char c = n + 64;
    for (int i = 0; i < n; i++) {
        for (int k = n-i-1; k < n-1; k++) cout << " ";
        for (int j = 0; j < n-i; j++) {
            if (j == 0 || j == n-i-1) cout << c;
            else cout << " ";
            cout << " ";
        }
        c--;
        cout << endl;
    }
    return 0;
}
