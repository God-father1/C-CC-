#include<iostream>
using namespace std;
int main() {
	int n;
	cin>>n;

	//first component
	cout<<"*";
	//spaces
	for(int i=1; i<=(n-3)/2;i++){
		cout<<" ";
	}
	//stars
	for(int i=1; i<=(n+1)/2;i++){
		cout<<"*";
	}
	cout<<endl;
	//second component
	for(int rows=1;rows<=(n-3)/2;rows++){
		cout<<"*";
		for(int i=1;i<=(n-3)/2;i++){
			cout<<" ";
		}
		cout<<"*"<<endl;
	}

	//third component
	for(int i=1;i<=n;i++){
		cout<<"*";
	}
	cout<<endl;
	//fourth component
	for(int rows=1;rows<=(n-3)/2;rows++){
		//spaces
		for(int i=1;i<=(n-3)/2+1;i++){
			cout<<" ";
		}
		//star
		cout<<"*";
		//spaces
		for(int i=1;i<=(n-3)/2;i++){
			cout<<" ";
		}
		//star
		cout<<"*"<<endl;
	}
	//fifth component
	for(int i=1;i<=(n+1)/2;i++){
		cout<<"*";
	}
	for(int spaces=1;spaces<=(n-3)/2;spaces++){
		cout<<" ";
	}
	cout<<"*"<<endl;
	return 0;
}