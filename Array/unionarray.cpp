#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,m,j=0,k=0;
        cin>>n>>m;
        vector<int> a(n);
        unordered_set<int> s;
        for(auto &it: a){    
        cin>>it;
        s.insert(it);
            
        }
        vector<int> b(m);
        for(auto &it: b){
        cin>>it;
        s.insert(it);}
       
        cout<<s.size()<<endl;
        
    }
	return 0;
}