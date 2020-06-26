// { Driver Code Starts
//Initial Template for C++

#include <iostream>
using namespace std;


 // } Driver Code Ends


//User function Template for C++

//Complete this function
int reverseArray(int arr[],int n)
{
   long int i=0,j=n-1;
   while(i<j){
       int temp = arr[j];
       arr[j]=arr[i];
       arr[i]=temp;
       i++;
       j--;
   }
  
  
   
 
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
	    
	    reverseArray(arr,n);
	    
	    for(int i=0;i<n;i++)
	    {
	        cout<<arr[i]<<" ";
	    }
	    
	    cout<<endl;
	    
	}
	return 0;
}  // } Driver Code Ends