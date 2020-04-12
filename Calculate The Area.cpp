/*B. Calculate The Area
time limit per test1.5 seconds
memory limit per test256 megabytes
inputstandard input
outputstandard output*/
#include <iostream>
#include <string>
using namespace std;
int main()
{
  int a,b[2];
  cin>>a;
  for(int i=1;i<a;i++){
    for(int j=1;j<i;j++){
     if(i*j==a){
         b[0]=i;
         b[1]=j;
     }
    }
  
  }
  cout<<b[0]<<" "<<b[1];
}
