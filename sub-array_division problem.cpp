#include<iostream>
#include<cstring>
using namespace std;
long long a[1000005], pre[1000005];
int main() {
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		memset(pre,0,sizeof(pre));
		pre[0]=1;
		int sum=0;
		for(int i=0;i<n;i++){
			cin>>a[i];
			sum+=a[i];
			sum%=n;
			sum=(sum + n)% n;
			pre[sum]++;
		}
		long long ans=0;
		for(int i=0;i<n;i++){
			long long j=pre[i];
			ans+= (j)*(j-1)/2;
		}
		cout<<ans<<endl;
	}
	return 0;
}