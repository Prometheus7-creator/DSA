#include <iostream>
#define N 100
using namespace std;

int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;
    long long fib[N];
    fib[0] = 1;
    fib[1] = 1;
    int l = (n * (n + 1))/2;
    for (int i = 2; i < l; i++) {
        fib[i] = fib[i-1] + fib[i-2];
    }
    int k = 0;
    for (int i = 0; i < n; i++) {
        for (int j = n-i-1; j < n; j++) {
            cout << fib[k++] << " ";
        }
        cout << endl;
    }
    return 0;
}
