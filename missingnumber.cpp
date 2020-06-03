#include <bits/stdc++.h>

using namespace std;

int main()
{
   long int n;
   cin>>n;
   n--;
   
   vector<long int> a(n);
   for(auto &it: a) cin>>it;
   sort(a.begin(),a.end());
   if(n==2){
   	cout<<a[0]+1;
   }
   for(long int i=0;i<n;i++){
       if(a[i]!=(i+1)){
           cout<<i+1<<endl;
           return 0;
       }
   }
   return 0;
}