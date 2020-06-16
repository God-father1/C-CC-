#include <iostream>
using namespace std;

int main() {
    int cases;
    cin >> cases;
    for (int cas = 0; cas < cases; cas++) {
        string s;
        cin >> s;
        int total = 0;
        for (int i = 0; s[i]; i++) {
            if ('0' <= s[i] && s[i] <= '9') total += s[i] - '0';
        }
        cout << total << endl;
    }
    return 0;
}