#include<iostream>
using namespace std;
int main() {
	int n,m,k,s;
	cin>>n>>m>>k>>s;
	char a[100][100];
	for(int i=0;i<n;i++){
		for(int j =0;j<m;j++){
			cin>>a[i][j];
		}
	}
	//calculating strength
bool success=true;
	for(int i=0;i<n;i++){
		for(int j =0;j<m;j++){
			if(s<k){
				success=false;
				break;
			}
			char ch =a[i][j];
			if(ch=='.'){
				s-=2;
			}
			else if(ch=='*'){
				s+=5;
			}
			else{
				break;
			}

			if(j!=(m-1)){
				s--;
			}
		}
	}
	if(success){
	cout<<"Yes\n"<<s<<endl;}
	else
	cout<<"No"<<endl;
	return 0;
}