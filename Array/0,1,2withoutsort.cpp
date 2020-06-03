#include <bits/stdc++.h>

using namespace std;

int main()
{
    /*Given an array which consists of only 0, 1 and 2. Sort the array without using any sorting algorithm.*/
    int n,c0=0,c1=0,c2=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        switch(a[i]){
            case 0: c0++;
            break;
            case 1: c1++;
            break;
            case 2: c2++;
            break;
        }
    }
    int i=0;
    while(c0>0){
        a[i++]=0;
        c0--;
    }
    while(c1>0){
        a[i++]=1;
        c1--;
    }
    while(c2>0){
        a[i++]=2;
        c2--;
    }
    
    for(int i=0;i<n;i++){
       cout<<a[i]<<" ";
    }
    
    return 0;
}
