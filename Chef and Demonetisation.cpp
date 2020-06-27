#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	long long int t;
	cin>>t;
	while(t--){
	    long long int s,n,res,count;
	    cin>>s>>n;
	    if(s%n==0){
	        count=s/n;

	    }
	    else{
	        res=s%n;
	        count=s/n;
	        if (res%2==0){
	            long int a = res/2;
	            count+=a;
	        }
	        else{
	            long int a = res/2;
	            count=a+count+1;
	        }
	        
	    }
	    cout<<count<<"\n";
	}
	return 0;
}
