#include<iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	int arr[n][n];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>arr[i][j];
		}
	}
	for(int i=n-1;0<=i;--i){
		cout<<endl;
		for(int j=0;j<n;j++){
			cout<<arr[j][i]<<" ";
		}
	}
	return 0;
}