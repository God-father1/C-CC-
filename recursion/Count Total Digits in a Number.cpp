// { Driver Code Starts
//Initial Template for C++

#include <iostream>
using namespace std;


 // } Driver Code Ends


//User function Template for C++

//Complete this function
int countDigits(int n)
{
   //Your code here
if(n%10==n || n==0)
return 1;
n = n/10;
return 1 +countDigits(n);
}

// { Driver Code Starts.

int main() {
	int T;
	cin>>T;
	while(T--)
	{
	    int n;
	    cin>>n;
	    
	    cout<<countDigits(n)<<endl;
	    
	    
	}
	return 0;
}


  // } Driver Code Ends