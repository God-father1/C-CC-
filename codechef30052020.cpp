#include<bits/stdc++.h>
using namespace std;

int main()
{   
    int t;
    cin>>t;
    while(t--){
        int arr[6],p,sum=0;
        for(auto &it: arr){
        cin>>it;
        }
        p=arr[5];
        //cout<<p;
        for(int i = 0; i<5;i++){
            arr[i]*=p;
            sum+=arr[i];
        }
        if(sum/5<=24){
            cout<<"No\n";
            }
        else{
            cout<<"Yes\n";
        }
        
    }
return 0;
}
