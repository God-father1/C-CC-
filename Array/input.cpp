#include <bits/stdc++.h>

using namespace std;

int main()
{
    /*Create an Array of size 10 of integers. Take input from the user for these 10 elements and print the entire array after that.*/
    vector<int> a(10);
    for(int i=0;i<10;i++){
        cin>>a[i];
    }
    for(int i=0;i<10;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}
