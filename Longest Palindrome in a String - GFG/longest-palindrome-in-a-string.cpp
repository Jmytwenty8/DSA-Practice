//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    string longestPalin (string s) {
        // code here
        
        int longest = 0;
        int start = 0;
        int end = 0;
        

        for(int i=0;i<s.size();i++){

            int l = i;
            int r = i;

            int length = 0;
            while(l>=0 && r < s.size() && s[l] == s[r]){
                length = r-l+1;
                if(length > longest){
                    longest = length;
                    start = l;
                    end = r;
                }
                l--;
                r++;
            }
        }

        for(int i=0;i<s.size();i++){

            int l = i;
            int r = i+1;

            int length = 0;
            while(l>=0 && r < s.size() && s[l] == s[r]){
                length = r-l+1;
                if(length > longest){
                    longest = length;
                    start = l;
                    end = r;
                }
                l--;
                r++;
            }
        }
        
        return s.substr(start,longest);
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