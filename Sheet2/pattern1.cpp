#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;
    int k = 1;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if ((j > i && j < n- i - 1) || (j > n-i-1 && j < i)) cout << " ";
            else cout << j+1;
        }
        cout << endl;
    }
    return 0;
}
