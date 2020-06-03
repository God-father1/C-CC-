#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,m,ans;
        cin>>n>>m;
        int total=n*m;
        if(total%2==0){
            ans=total/2;
            cout<<ans;
            
        }
        else{
            ans=floor(total/2)+1;
            cout<<ans;
        }
        cout<<endl;
    }

    return 0;
}
