#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    getline(cin,s);
    for(int i=0;s[i]!='\0';i++){
        if(s[i]==' '){
            continue;
        }
        cout<<s[i];
    }
    cout<<endl;
    return 0;
}
