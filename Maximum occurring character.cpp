#include<bits/stdc++.h>
using namespace std;


class Solution
{
    public:
    //Function to find the maximum occurring character in a string.
    char getMaxOccuringChar(string str)
    {
        // Your code here
        string ans;
        int a[128]= {0};
        int max=0,ind,val,iv;
        
        for(int i=0 ; i<str.length() ; i++)
        {
            
             ind = str[i]-'a';
             //cout<<ind<<endl;
             a[ind]+=1;
             
             
             if(a[ind]>max || (a[ind]==max && ind<val) )
             {
                 max=a[ind];
                 val=ind;
                 iv=i;
            //    cout<<"n"<<endl;
          //  cout<<max<<"\n";
                 
             }
             
             
             
             
        }
         
         
    
         char ch = str[iv];
         return ch;
        
    }

};

int main()
{
	int t;
	while(t--)
	{
		string str;
		cin>>str;
		
		Solution obj;
		
		cout<<obj.getMaxOccuringChar(str)<<endl;
		
		return 0;
	}
}
