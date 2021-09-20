// { Driver Code Starts
//Initial Template for C++


#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

vector<int> thePendulum(vector<int>v)
{
    sort(v.begin(), v.end());
    
    list<int>ans;
    int trigger=0;
    for(int i = 0; i < v.size();)
    {
        
        if(trigger == 0)
        {
            ans.push_front(v[i]);
            i++;
            if(i<v.size())
            {
                ans.push_front(v[i]);
                i++;
            }
            trigger=1;
        }
        else 
        {
            ans.push_back(v[i]);
            i++;
            if(i<v.size())
            {
                ans.push_back(v[i]);
                i++;
            }
            trigger=0;
        }
        
        
    }
    v.clear();
    for(auto i = ans.begin(); i !=ans.end(); i++)
    v.push_back(*i);
    
    return v;
    
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
        vector<int> v;
        
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            v.push_back(x);
        }
        
        vector<int> ans=thePendulum(v);
        
        for(auto x:ans)
        cout<<x<<" ";
        
        cout<<endl;
        
        
    }
    return 0;
    
}  // } Driver Code Ends
