#include <iostream>
using namespace std;

int main() {
	long int a,b;
	cin>>a>>b;
	if((a-b)%10==9){
	    cout<<a-b-1;
	}
	else{
	    
	cout<<abs(a-b+1);
	}
	return 0;
}
