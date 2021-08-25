using namespace std;


 // } Driver Code Ends
// User function template for c++
class Solution {
  public:
    string removeChars(string s1, string s2) {
        // code here
        
         for(int i = 0;i<s1.length();)
	    {
	       while(s2.find(s1[i])!= string::npos)
	            s1.erase(i,1);
	       i++;     
	            
	    }
	    
	    return s1;
    }
};


// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string string1,string2;
        cin >> string1; 
        cin >> string2;
        Solution ob;
        cout << ob.removeChars(string1,string2) << endl;
    }
    return 0;
}
