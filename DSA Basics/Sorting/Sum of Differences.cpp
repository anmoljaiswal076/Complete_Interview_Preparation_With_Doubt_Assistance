// { Driver Code Starts
//Initial Template for C++


#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++



int sumOfDiff(int arr[],int n)
{
    sort(arr,arr+n);
    
    int sum=0;
    
    for(int i=0;i<n/2;i++)
    {
        sum=sum+abs(arr[i]-arr[n-i-1]);
    }
    
    if(n%2==0)
    {
        return sum;
    }
    else
    {
        return sum+arr[n/2];
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
	    
	    cout<<sumOfDiff(arr,n);
	    
	    cout<<endl;
	    
	    
	    
	}
	return 0;
}  // } Driver Code Ends
