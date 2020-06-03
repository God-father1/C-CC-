#include<bits/stdc++.h>
using namespace std;

int main()
{   
    int t;
    cin>>t;
    while(t--){
        int N,x1=0,x2=0,count=0;
        cin>>N;
        vector<int> a(N) ;
        for(auto &it: a)    cin>>it;
        vector<int> b(N) ;
        for(auto &it: b)    cin>>it;
        for(int i=0; i<N; i++){
            
            x1+=a[i];
            x2+=b[i];
            if(x1==x2 && (x1-a[i])==(x2-b[i]) ){
               count+=b[i];
               //cout<<count<<"\n";
            }
            
        }
        cout<<count<<"\n";
        
    }
return 0;
}
