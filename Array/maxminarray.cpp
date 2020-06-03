#include <bits/stdc++.h>

using namespace std;

int main()
{
    /*Find the minimum and maximum element in an array.*/
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"MAX "<<*max_element(a.begin(),a.end());
    cout << "\nMIN "<< *min_element(a.begin(), a.end()); 
    
    return 0;
}
