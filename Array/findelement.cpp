#include <bits/stdc++.h>

using namespace std;

int main()
{
    /*Check whether n is present in an array of size m or not.Input -n,m (Input number, size of array)-Take input n elements for the arrayOutput -> true/false.*/
    int n,m,count=0;
    cin>>n>>m;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]==n){
            count=1;
        }
    }
    if(count==1){
        cout<<"true";
        
    }
    else{
        cout<<"false";
    }
    
    return 0;
}
