// { Driver Code Starts
//Initial Template for C++


#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


//User function Template for C++


//Complete this function
int sumOfMaxandMin(int arr[],int n)
{
    //Your code here
    sort(arr,arr+n);
    return arr[0]+arr[n-1];
}


// { Driver Code Starts.


int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	        cin>>arr[i];
	        
	   cout<<sumOfMaxandMin(arr,n)<<endl;
	}
	return 0;
}  // } Driver Code Ends