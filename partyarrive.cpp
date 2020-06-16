#include <bits/stdc++.h>
using namespace std;

int main() {
int t;
cin>>t;
while(t--){
    int n,sum=0;
    cin>>n;
    std::vector<int> a(n) ;
    for(auto &it: a)
        cin>>it;
    sort(a.begin(),a.end());
    for(int i=0;i<n;i++){
        if(a[i]>sum){
            
        }
        else{
            sum++;
        }
    }
    cout<<sum<<"\n";
}
	return 0;
}
