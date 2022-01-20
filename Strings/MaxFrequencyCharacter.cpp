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
    for (int i = 0; i < n; i++) {
        freq[s[i]]++;
        if (freq[s[i]] > m) {
            m = freq[s[i]];
            maxOccurringChar = s[i];
        }
    }
    cout << "Max Occurring character: " << maxOccurringChar << endl;
    return 0;
}
