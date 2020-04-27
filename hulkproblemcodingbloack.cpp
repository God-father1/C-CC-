#include<iostream>
using namespace std;
int main() {
	int n,j,ans=0;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>j;
		cout<<__builtin_popcount(j)<<endl;;
	}
	return 0;
}