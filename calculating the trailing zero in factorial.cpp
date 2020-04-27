#include<iostream>
using namespace std;


int main () {

int n,ans=0,p=5;
cin>>n;
while((n/p)>0){
ans+=n/p;
p=5*p;
}
cout<<ans;

return 0;
}