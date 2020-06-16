#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int l,r,sum=0;
	    cin>>l>>r;
	    for(int i=l;i<=r;i++){
	        if((i-2)%10==0 or (i-3)%10==0 or (i-9)%10==0){
	            sum++;
	        }
	    }
	    cout<<sum<<"\n";
	}
	return 0;
}
