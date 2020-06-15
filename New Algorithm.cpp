#include<bits/stdc++.h>
 using namespace std;
int main(){
    long long int n;
    int count;
    cin>>n>>count;

    for(int i=0;i<count;i++){
        if(n%10!=0){
            n--;
        }
        else{
            n/=10;
        }
        
    }
    cout<<n<<"\n";
    return 0;
}