#include <iostream>
#include <string>

using namespace std;

void permutations(string s, int l, int r) {
    if (l == r) cout << s << endl;
    for (int i = l; i <= r; i++) {
        swap(s[l], s[i]);
        permutations(s, l+1, r);
        swap(s[l], s[i]);
    }
}

int main() {
    string s;
    cout << "Enter string: ";
    cin >> s;
    cout << "Permutations:" << endl;
    //without STL functions
    permutations(s, 0, s.size()-1);
    return 0;
}

//with STL functions
// int main() {
    
//     string s, cpy;
//     cout << "Enter string: ";
//     cin >> s;
//     cpy = s;
//     int n = s.size();
//     cout << "All permutations of input string:" << endl;
//     //previous permutations
//     do {
//         cout << cpy << " ";
//     } while (prev_permutation(cpy.begin(), cpy.end()));
//     //next permutations
//     while (next_permutation(s.begin(), s.end())) {
//         cout << s << " ";
//     } 
//     cout << endl;
//     return 0;
// }
