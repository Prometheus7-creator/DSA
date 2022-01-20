#include <iostream>

using namespace std;

int main() {
    
    string s1, s2;
    cout << "Enter two strings: ";
    cin >> s1 >> s2;
    s1 += s1;
    if (s1.find(s2) != string::npos)
        cout << "True" << endl;
    else cout << "False" << endl;
    return 0;
}
