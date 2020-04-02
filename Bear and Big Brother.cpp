
#include <iostream>
#include <string>
using namespace std;
int main()
{
  int a,b,c=0;
  cin>>a>>b;
  for(int i=0; a<=b;i++)
  {
       a*=3;
       b*=2;
       c++;
  }
  cout<<c<<endl;
  return 0;
}
