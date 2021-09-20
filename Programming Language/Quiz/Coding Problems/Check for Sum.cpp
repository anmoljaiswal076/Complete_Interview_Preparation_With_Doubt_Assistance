#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    
    while(t--)
    {
        int a, b, c;
        
        cin >> a >> b >> c;
        
        int f = 0;
        
        if(a + b == c)
        {
            f = 1;
        }
        else if(b + c == a)
        {
            f = 1;
        }
        else if(a + c == b)
        {
            f = 1;
        }
        
        if(f)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    
    return 0;
}
