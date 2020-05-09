
#include <iostream>

using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int size = n * m;
    if(size%2==0){
    	cout<<size/2;
    }
    else{
    	cout<<int(size/2);
    }
    
    
    return 0;
}
