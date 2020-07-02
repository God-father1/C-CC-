// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

long long toh(int n, int from, int to, int aux);

int main() {

    int T;
    cin >> T;
    while (T--) {
        long long moves = 0;
        int N;
        cin >> N;
        moves = toh(N, 1, 3, 2);
        cout << moves << endl;
    }
    return 0;
}



 // } Driver Code Ends


// You need to complete this function

// avoid space at the starting of the string in "move disk....."
long long toh(int n, int from_rod, int to_rod, int aux_rod) {
    // Your code here
    int move=0;
    if (n == 1)  
    {  
        cout << "move disk 1 from rod " << from_rod <<  
                            " to rod " << to_rod<<endl;  
        move++;
        return move;  
    }  
    move+=toh(n - 1, from_rod, aux_rod, to_rod);  
    cout << "move disk " << n << " from rod " << from_rod << 
                                " to rod " << to_rod << endl;  
    move++;
                              
    move+=toh(n - 1, aux_rod, to_rod, from_rod); 
}


// { Driver Code Starts.  // } Driver Code Ends