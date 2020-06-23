#include <iostream>
using namespace std;

int main() {
	//code
		int t;
	cin>>t;
	while(t--){
	    int a;
	    cin>>a;
	    if((a^1)>0 && (a^1)<a)
	        cout<<"Player A\n";
	        
	    
	    else{
	        cout<<"Player B\n";
	    }
	}
	return 0;
}