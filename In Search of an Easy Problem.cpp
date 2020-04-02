
#include <iostream>
#include <string>
using namespace std;
int main()
{
  int a,c=0,d=0;
  cin>>a;
  int b[a];
  for(int i=0;i<a;i++){
   cin>>b[i];
  }
  for(int i=0;i<a;i++){
   if(b[i]==0)
    c++;
    else
    d++;
  }
  if(c>0 && d==0)
  cout<<"EASY"<<endl;
  else
  cout<<"HARD"<<endl;
    return 0;  
  
}
