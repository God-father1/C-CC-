#include <bits/stdc++.h>

using namespace std;

int main()
{
    /*Find the range of the array. Range means the difference between the maximum and minimum element in the array.*/
    int n,ma,mi;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    ma=*max_element(a.begin(),a.end());
    mi=*min_element(a.begin(),a.end());
    cout<<"Range of array: "<<ma-mi;
    return 0;
}
