// { Driver Code Starts
#include <iostream>
using namespace std;

int isPalinUtil(int N,int rev);

bool isPalin(int N);

int main() {
	int T;
	cin>>T;
	while(T--) 
	{
	    int N;
	    cin>>N;
	    cout<<isPalin(N)<<endl;
	}
	return 0;
}// } Driver Code Ends


//User function Template for C++

int isPalinUtil(int N,int rev)
{
    if(N == 0)
        return rev; 
    return isPalinUtil(N / 10, rev * 10 + N % 10);
}
bool isPalin(int N)
{

     if(isPalinUtil(N,0)==N)
     return true;
    
    return false;
}