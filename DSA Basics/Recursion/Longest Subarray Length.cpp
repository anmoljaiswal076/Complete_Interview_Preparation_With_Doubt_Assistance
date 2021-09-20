// { Driver Code Starts
//Initial Template for C++


#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

//Complete this function
int longestLength(int arr[],int n)
{
   
    int maxLength=0;
    
    for(int i=0;i<n;i++)
    {
        
        int currlength=1;
        
        while(i+1<n && arr[i+1]==arr[i])
        {
            currlength++;
            i++;
        }
        
        if(currlength>maxLength)
        {
            maxLength=currlength;
            
        }
    }
    
    return maxLength;
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
