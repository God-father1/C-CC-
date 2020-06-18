#include<bits/stdc++.h>
using namespace std;
#define int long long
#define pb push_back
#define ff first
#define ss second
 
void solve()
{
	int n;
	cin>>n;
	if(!(n&(n-1)))
	{
	    cout<<-1<<endl;
	    return;
	}
	int ans=0;
	for(int i=1; i<=n; i<<=1)
	    ans+=((n-i)/(i<<1))*i;
	for(int i=2; i<n; i<<=1)
	    ans+=i;
	cout<<ans<<endl;
}
 
int32_t main() 
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int t=1;
	cin>>t;
	while(t--)
	    solve();
	return 0;
} 