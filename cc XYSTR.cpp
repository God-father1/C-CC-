#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int T; cin >> T;
	while(T--) {
	    string str;
	    cin >> str;
	    int ans = 0;
	    char p = str[0];
	    for(int i = 1; i < str.length(); i++) {
	        if(p == 'x' and str[i] == 'y') {
	            ans++;
	            p = 'l';
	        }
	        else if(p == 'y' and str[i] == 'x') {
	            ans++;
	            p = 'l';
	        }
	        else p = str[i];
	    }
	    cout << ans << endl;
	}
	return 0;
}