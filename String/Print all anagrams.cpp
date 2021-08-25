//Initial Template for C++
#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution{
  public:
    vector<vector<string> > Anagrams(vector<string>& s) {
        //code here
        
        
       
        unordered_map< string , vector<string> > m;
        
        int n=s.size();
        
        for(int i=0 ; i<n ; i++)
          {
              string a = s[i];
              
              sort(a.begin(),a.end());
              
              
            m[a].push_back(s[i]);
            
            
          }
           vector<vector<string> >ans(m.size());
           int in=0;
           
          for(auto it:m)
             
             {
                 auto v = it.second;
                 
                 for(int i=0;i<v.size();i++)
                     ans[in].push_back(v[i]);
                 
                 in++;
             }
         
        
        return ans;
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<string> string_list(n);
        for (int i = 0; i < n; ++i)
            cin>>string_list[i]; 
        Solution ob;
        vector<vector<string> > result = ob.Anagrams(string_list);
        sort(result.begin(),result.end());
        for (int i = 0; i < result.size(); i++)
        {
            for(int j=0; j < result[i].size(); j++)
            {
                cout<<result[i][j]<<" ";
            }
            cout<<"\n";
        }
    }

    return 0;
}
  // } Driver Code Ends
