#include<iostream>
using namespace std;


 // } Driver Code Ends


//User function Template for C++

//Complete this function
int isSorted(int arr[],int n)
{
    if(arr[0]>arr[1]){
          for(int i=0;i<n-1;i++){
      if(arr[i]>=arr[i+1]){
          continue;
      }
      else
      return 0;
          }
  return 1;
               
    }
    else{
  

  for(int i=0;i<n-1;i++){
      if(arr[i]<=arr[i+1]){
          continue;
      }
      else
      return 0;
  }
  return 1;
    }
   
}

// { Driver Code Starts.


int main() {
	int T;
	cin>>T;
	while(T--) 
	{
	    int N;
	    cin>>N;
	    int arr[N];
	    for(int i=0;i<N;i++)
	    cin>>arr[i];
	    
	    cout<<isSorted(arr,N);
	    cout<<endl;
	}
	return 0;
}  // } Driver Code Ends