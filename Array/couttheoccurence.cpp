#include <bits/stdc++.h>

using namespace std;

int main()
{
    /*Given an number n. Find the number of occurrences of n in the array.*/
    int n,k,count=0;
    cin>>k>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]==k){
            count++;
        }
        
    }
    cout<<"count is "<<count<<endl;
    
    return 0;
}
