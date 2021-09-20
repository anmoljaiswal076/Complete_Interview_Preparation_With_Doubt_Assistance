#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    
    while(t--)
    {
        int n, m;
        
        cin>>n>>m;
        
        int mat[n][m];
        
        for(int i=0; i<n; i++)
            for(int j =0; j<m; j++)
                cin>>mat[i][j];
                
        int i = 0;
        int j = n-1;
        
        int f = 1;
        
        while(i < j)
        {
            int sum1 = 0, sum2 = 0;
            
            for(int k = 0; k<m; k++)
            {
                sum1 += mat[i][k];
                sum2 += mat[j][k];
            }
            
            if(sum1 != sum2)
            {
                f = 0;
                break;
            }
                
            i++;
            j--;
        }
        
        if(f)
            cout<<"YES\n";
        else
            cout<<"NO\n";
        
    }
    return 0;
}
