// { Driver Code Starts
//Initial Template for C++


#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++


//Complete this function
int sumOfMaxandMin(int arr[],int n)
{
    int sumOfMaxandMin(int arr[],int n)
    {
        int maxx=INT_MIN;
        int minn=INT_MAX;
    
        for(int i=0;i<n;i++)
        {
            if(arr[i]>maxx)
            {
              maxx=arr[i];
            }
        
            if(arr[i]<minn)
            {
               minn=arr[i];
            }
        }     
        return maxx+minn;
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
	        
	   cout<<sumOfMaxandMin(arr,n)<<endl;
	}
	return 0;
}  // } Driver Code Ends
