// { Driver Code Starts
//Initial Template for C++

#include <iostream>
#include <cmath>
using namespace std;

 // } Driver Code Ends
//User function Template for C++

//s is the string. return the floor of average
int avgOfString(string s)
{
    int sum=0;
    for(int i=0;i<s.length();i++)
    {
        sum+=(int)(s[i]);
    }
    
    int average=floor(sum/s.length());
    
    return average;
}

// { Driver Code Starts.

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    string s;
	    cin>>s;
	    
	    cout<<avgOfString(s)<<endl;
	    
	}
	return 0;
}


  // } Driver Code Ends
