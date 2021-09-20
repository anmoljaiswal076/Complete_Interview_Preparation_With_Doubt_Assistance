#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    
    while(t--)
    {
        string str;
        cin>>str;
        
        unordered_set<char> st;
        st.insert('a');
        st.insert('e');
        st.insert('i');
        st.insert('o');
        st.insert('u');
        st.insert('A');
        st.insert('E');
        st.insert('I');
        st.insert('O');
        st.insert('U');
        
        int c = 0;
        
        for(int i=0; i<str.length(); i++){
            if(st.find(str[i])!=st.end())
            {
                c += 1;
            }
            else if((str[i]>=65 && str[i]<=91)||(str[i]>=97 && str[i]<=123))
            {
                c += 2;
            }
            else
                c += 3;
        }
        
        cout<<c<<endl;
    }
}
