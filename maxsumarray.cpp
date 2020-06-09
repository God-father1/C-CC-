// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

int max_sum(int A[],int N);

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int N;
        cin>>N;
        int A[N];
        for(int i=0;i<N;i++)
        {
            cin>>A[i];
        }

        cout<<max_sum(A,N)<<endl;
        /*keeping track of the total sum of the array*/

    }
}
// } Driver Code Ends

int max_sum(int A[],int N){
int max = 0, count, temp;

for(int i = 0; i < N; i++){
count = 0;
temp = 0;
for(int j = i; count < N; j = (j + 1) % N){
temp += count*A[j];
count++;
}
if(temp > max){
max = temp;
}
}
return max;
}