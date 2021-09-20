// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

//Complete this function using recursion
int sumOfProductOfDigits(int n1, int n2)
{
    
    int sumOfProductOfDigits(int n1, int n2)
    {
        if(n1==0 || n2==0)
        {
            return 0;
        }
    
        return (n1%10)*(n2%10)+sumOfProductOfDigits(n1/10,n2/10);
    }
}


int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    
	    int n1;
	    int n2;
	    cin>>n1;
	    cin>>n2;
	    
	    
	    cout<<sumOfProductOfDigits(n1,n2)<<endl;
	    
	    
	}
	return 0;
}  // } Driver Code Ends
