#include<bits/stdc++.h>
using namespace std;



int power(long long int x, long long int y, long long int p) 
{ 
	long long int res = 1;	 
	x = x % p; 

	if (x == 0) return 0; 
	while (y > 0) 
	{ 
		
		if (y & 1) 
			res = (res*x) % p; 

		/
		y = y>>1;
		x = (x*x) % p; 
	} 
	return res; 
} 

// Driver code 
int main() 
{ 
	long long int x = 2; 
	long long int y; 
	cin>>y;
	long long int p = pow(10,9)+7; 
	cout << power(x, y, p); 
	return 0; 
} 

