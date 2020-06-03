#include <bits/stdc++.h>

using namespace std;

int main()
{
   long long int n;
   cin>>n;
   while(n--){
       long long p,q;
       cin>>p>>q;
       if((p+q)%4!=0 && p>0 || q>0){
           cout<<"YES"<<endl;
           
       }
       else{
           cout<<"NO"<<endl;
       }
   }
   return 0;
}