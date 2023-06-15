//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    string longestPalin (string s) {
        // code here
       string ans = "";
       int n  = s.length(); 
       int ptr1 = 0 ,ptr2 = 0,len = 0;
       
       for(int i =1;i<n;i++){
           
         //jab odd hai  tab ek pointer se kaam hojayega;     aaa
           
           int l =i-1;
           int r =i+1;
           
           while(l>=0 && r<n && s[l] == s[r]){
               if(len<(r-l+1)){
                   ptr1 = l;
                   ptr2 = r;
                   len  = r-l+1;
               }
               l--;                      
               r++;
           }
           
 
           //jab  even hai  tab  adjacent pointer lena se kaam hojayega; 
            l = i-1;
            r = i;
            
            while(l>=0 && r<n && s[l] == s[r]){
               if(len<(r-l+1)){
                   ptr1 = l;
                   ptr2 = r;
                   len  = r-l+1;
               }
               l--;
               r++;
           }
           
       }
       
      //out<<len<<endl;
       
       for(int i = ptr1;i<=ptr2;i++){
           ans+=s[i];
       }
       
       
       
       return ans;
           
          
    }
};

//{ Driver Code Starts.

int main()
{
    int t; cin >> t;
    while (t--)
    {
        string S; cin >> S;
        
        Solution ob;
        cout << ob.longestPalin (S) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends