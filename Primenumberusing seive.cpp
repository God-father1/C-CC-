#include<iostream>
using namespace std;

void prime(int *p){
	//marking all odd nos prime
	for(int i=3;i<1000005;i+=2){
		p[i]=1;
	}
	for(long long i=3;i<1000005;i+=2){
		//sieve
		if (p[i]==1){
			for(long long j=i * i;j<1000005;j=j+i){
				p[j]=0;
			}
		}
	}
	//special case
	p[2]=1;
	p[1]=p[0]=0;
}
int main() {
int n;
int p[1000005]={0};
cin>>n;
prime(p);
for( int i=0;i<n;i++){
	int a,b,count=0;
	cin>>a>>b;
	
	for(int i=a;i<b;i++){
		if(p[i]==1){
			count++;
		}
	}
	cout<<count<<endl;

}


	return 0;
}