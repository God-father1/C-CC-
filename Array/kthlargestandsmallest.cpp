#include <bits/stdc++.h>

using namespace std;

int main()
{
    /*Find the Kth largest and Kth smallest number in an array.*/
    int n,k;
    cin>>k>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    cout<<k<<" largest number "<<a[n-3]<<"\n";
    cout<<k<<" smallest number "<<a[2];
    return 0;
}
