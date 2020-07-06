#include<bits/stdc++.h>
using namespace std;

// Function prototype
int countSumSubsets(int[], int);


 // } Driver Code Ends
//User function Template for C++

/*Function to count subset with even sum
* arr : array input
* N : size of array
*/
int countSumSubsets(int arr[], int length){

int co=0;

    for (int i = 1; i < (pow(2, length)); i++) {

        
        int sum = 0;

        for (int j = 0;j < length; j++)

    
            if (((i >> j) & 1))
                sum += arr[j];

        
        if (sum%2==0) {
            co++;
        }
    }



    return  co;
    
}

// { Driver Code Starts.

// Driver code to test columnWithMaxZeros function
int main() {
	
	int testcase;
	
	cin >> testcase;
	
	while(testcase--){
	    int N;
	    cin >> N;
	    
	    int arr[N];
	    
	    // Taking elements input into the matrix
	    for(int i = 0;i<N;i++){
	            cin >> arr[i];
	        }
	    
	    cout << countSumSubsets(arr, N) << endl;
	}
	
	return 0;
}  // } Driver Code Ends