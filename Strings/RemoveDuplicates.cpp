#include <iostream>
#include <vector>
#define MAX_LEN 256

using namespace std;

int main() {
    
    string s;
    cout << "Enter string: ";
    cin >> s;
    vector<int> freq(MAX_LEN, 0);
    int n = s.size();
    char maxOccurringChar = '\0';
    int m = 0;
    for (int i = 0; i < n; i++) freq[s[i]]++;
    int j = 0;
    for (int i = 0; i < n; i++) {
        if (freq[s[i]] >= 1) {
            s[j++] = s[i];
            freq[s[i]] = 0;
        }
    }
    s.resize(j);
    cout << "Processed string: " << s << endl;
    return 0;
}
