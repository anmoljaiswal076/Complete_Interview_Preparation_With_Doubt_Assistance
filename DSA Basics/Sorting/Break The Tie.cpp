// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



 // } Driver Code Ends
//User function Template for C++

//User function Template for C++

/*
names[]: array of names
n: size of array
*/
string TieBreak(string names[], int n)
{
    string winner = "";
    unordered_map<string, int> ump;
    for(int i = 0; i < n; i++)
        ump[names[i]]++;
        
    int maxVotes = 0;
    for(auto itr= ump.begin(); itr != ump.end(); itr++)
    {
        if((itr->second > maxVotes) || ((itr->second == maxVotes) && (itr->first < winner)))
        {
            maxVotes = itr->second;
            winner = itr->first;
        }
        
    }
    return winner;
}



// { Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    
    while(t--)
    {
        int n;
        cin>>n;
        
        string names[n];
        for(int i = 0; i < n; i++)
            cin>>names[i];
        cout << TieBreak(names,n) <<endl; 
    }
}
  // } Driver Code Ends
