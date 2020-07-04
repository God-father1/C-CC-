// { Driver Code Starts
//Initial Template for C++


#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


//User function Template for C++

//Complete this function
int longestLength(int arr[],int n)
{
   //Your code here
   int max=1,count=1;
   for(int i=0;i<n-1;i++){
       if(arr[i]==arr[i+1]){
       count++;
       if(max<=count)
       max=count;
       }
       else
       count=1;
   }
   return max;
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
	        
	   cout<<longestLength(arr,n)<<endl;
	}
	return 0;
}  // } Driver Code Ends