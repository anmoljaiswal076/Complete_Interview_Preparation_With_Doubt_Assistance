// { Driver Code Starts
//Initial Template for C++


#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

bool isPerfectSquare(long long n)
{
    long long root=sqrt(n);
    return root*root==n;
}

long long nearestPerfectSquare(long long n)
{
    long long smaller;
    long long greater;
    
    if(isPerfectSquare(n)==true)
    {
       smaller=sqrt(n)-1;
       greater=sqrt(n)+1;
    }
    else
    {
       smaller=floor(sqrt(n));
       greater=ceil(sqrt(n));
    }
    
    
    if(abs(smaller*smaller-n)<abs(greater*greater-n))
        return smaller*smaller;
    else
        return greater*greater;
}

// { Driver Code Starts.



int main() {
    int testcases;
    cin>>testcases;
    while(testcases--)
    {
        long long n;
        cin>>n;
        
        cout<<nearestPerfectSquare(n)<<endl;
        
    }
	return 0;
}  // } Driver Code Ends
