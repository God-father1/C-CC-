#include<bits/stdc++.h>
using namespace std;

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n,k,sum=0,sum1=0;
	    cin>>n>>k;
	    std::vector<int>  a(n);
	    for(auto &it: a){
	        cin>>it;
	    }
	   for(int i=0;i<n;i++){
	       sum+=a[i];
	       if(a[i]>k){
	           
	           sum1+=k;
	           }
	       else{
	           sum1+=a[i];
	       }
	 }
	   cout<<sum-sum1<<"\n";
	}
	
	return 0;
}